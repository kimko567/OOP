#include <iostream>
#include <string>
using namespace std;

class Article {

protected:
	string svītru_koda_numurs;
	string nosaukums;
	float cena_par_gabalu;

public:
	Article() : svītru_koda_numurs("_"), nosaukums("_"), cena_par_gabalu(-1) {
	}
	Article(string svītru_koda_numurs, string nosaukums, float cena_par_gabalu) {
		this->svītru_koda_numurs = svītru_koda_numurs;
		this->nosaukums = nosaukums;
		this->cena_par_gabalu = cena_par_gabalu;
	}
	virtual ~Article() {
		cout << "Sveiciens no \"Article\" desturktora!" << endl;
	}
	virtual void Print() const {
		cout << endl
			<< "\tSvitru koda numurs: " << this->svītru_koda_numurs << endl
			<< "\tNosaukums: " << this->nosaukums << endl
			<< "\tCena par gabalu: " << this->cena_par_gabalu << endl;
	}
	string Getsvītru_koda_numurs() const {
		return svītru_koda_numurs;
	}
	string Getnosaukums() const {
		return nosaukums;
	}
	float Getcena_par_gabalu() const {
		return cena_par_gabalu;
	}
	void Setsvītru_koda_numurs(string svītru_koda_numurs) {
		this->svītru_koda_numurs = svītru_koda_numurs;
	}
	void Setnosaukums(string nosaukums) {
		this->nosaukums = nosaukums;
	}
	void Setcena_par_gabalu(float cena_par_gabalu) {
		this->cena_par_gabalu = cena_par_gabalu;
	}

};

class Book : public Article {
private:
	string Author;

public:
	Book() : Article() {
		this->Author = '_';
	}
	Book(string svītru_koda_numurs, string nosaukums, float cena_par_gabalu, string Author) : Article(svītru_koda_numurs, nosaukums, cena_par_gabalu) {
		this->Author = Author;
	}
	~Book() {
		cout << "Sveiciens no \"Book\" desturktora!" << endl;
	}
	string GetAuthor() const {
		return this->Author;
	}
	void SetAuthor(string Author) {
		this->Author = Author;
	}
	void Print() const {
		Article::Print();
		cout << "\tAutors: " << this->Author << endl;
	}

};

class BookShop {
	private:
		static const unsigned int DEFAULT_MAX_LENGTH = 10;
		unsigned int Max_length;
		unsigned int Length;
		Book** Nodes;

	public:
		static unsigned int GetDefaultMaxLength() {
			return DEFAULT_MAX_LENGTH;
		}
		BookShop() : Max_length(DEFAULT_MAX_LENGTH), Length(0) {
			Nodes = new Book* [Max_length];
		}
		BookShop(unsigned int Max_length) : Length(0) {
			this->Max_length = Max_length;
			Nodes = new Book* [Max_length];
		}
		~BookShop() {
			for (int i = 0; i < Length; i++)
				delete Nodes[i];
			delete[] this->Nodes;
			cout << "BookShop iznicinats!" << endl;
		}
		void Add(Book *book) {
			if (Length == Max_length)
				throw overflow_error("Kluda: Max_length sasniegts! Neizdevas pievienot...");
			Nodes[Length++] = book;
			cout << "Objekts " << Length << " pievienots!" << endl;
		}
		float GetMaxPrice() {
			float max = NULL;
			for (int i = 0; i < Length; i++) {
				float tmp = Nodes[i]->Getcena_par_gabalu();
				if (max < tmp)
					max = tmp;
			}
			return max;
		}
		unsigned int GetMaxLength() {
			return Max_length;
		}
		void Print() {
			cout << "\nBookShop: " << endl;
			for (int i = 0; i < Length; i++) {
				Nodes[i]->Print();
			}
			cout << endl;
		}
};

int main() {
		//Dažadu Book objektu izveide.
		Book* b1 = new Book();
		Book* b2 = new Book("128918329", "Matematika Nr.2", 15.99f, "J. Naupe");
		Book* b3 = new Book("928918920", "Matematika Nr.33", 12.97f, "J. Naupe");
		Book* b4 = new Book();
		Book* b5 = new Book();

		//BookShop objekta izveide
		BookShop bs1(4);

	    //Statiskās metodes BookShop::GetDefaultMaxLength() izpilde
		cout << "Statiska metode BookShop::GetDefaultMaxLength(): " 
			 << BookShop::GetDefaultMaxLength()
			 << endl;

		//Metodes BookShop::GetMaxLength() izpilde - izvada konkrētā BookSjop masīva maksimālo izmēru!
		cout << "\nMetode BookShop::GetMaxLength(): "
			 << bs1.GetMaxLength()
			 << endl;
		
		//Book obkektu ievietošana BookShop objekta masīvā.
		cout << endl;
		try {
			bs1.Add(b1);
			bs1.Add(b2);
			bs1.Add(b3);
			bs1.Add(b4);
			bs1.Add(b5);
		}
		catch (const overflow_error& err) {
			cout << err.what() << endl;
		}
		catch (...) {
			cout << "Nezināma kluda!" << endl;
		}

		//BookShop masīva elementu izvade jeb BookShop::Print().
		bs1.Print();

		//Metodes BookShop::GetMaxPrice() izpilde - izvada dārgākās grāmatas cenu!
		cout << "\nMetode BookShop::GetMaxPrice(): "
			 << bs1.GetMaxPrice()
			 << endl;

		cout << endl;
	
	return 0;
}
