#include <iostream>
#include <string>
using namespace std;

class OverflowException {
public:
	OverflowException() {
		cout << endl << "Exception created!" << endl;
	}
	OverflowException(const OverflowException&) {
		cout << "Exception copied!" << endl;
	}
	~OverflowException() {
		cout << "Exception finished!" << endl;
	}
};

template <class T>
class Article {

protected:
	string svītru_koda_numurs;
	string nosaukums;
	T cena_par_gabalu;

public:
	Article() : svītru_koda_numurs("_"), nosaukums("_"), cena_par_gabalu(-1) {
	}
	Article(string svītru_koda_numurs, string nosaukums, T cena_par_gabalu) {
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
	T Getcena_par_gabalu() const {
		return cena_par_gabalu;
	}
	void Setsvītru_koda_numurs(string svītru_koda_numurs) {
		this->svītru_koda_numurs = svītru_koda_numurs;
	}
	void Setnosaukums(string nosaukums) {
		this->nosaukums = nosaukums;
	}
	void Setcena_par_gabalu(T cena_par_gabalu) {
		this->cena_par_gabalu = cena_par_gabalu;
	}

};

template <class T>
class Book : public Article<T> {
private:
	string Author;

public:
	Book() : Article<T>() {
		this->Author = '_';
	}
	Book(string svītru_koda_numurs, string nosaukums, T cena_par_gabalu, string Author) : Article<T>(svītru_koda_numurs, nosaukums, cena_par_gabalu) {
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
		Article<T>::Print();
		cout << "\tAutors: " << this->Author << endl;
	}

};

template <class T>
class BookShop {
private:
	static const unsigned int DEFAULT_MAX_LENGTH = 10;
	unsigned int Max_length;
	unsigned int Length;
	Book<T>** Nodes;

public:
	static unsigned int GetDefaultMaxLength() {
		return DEFAULT_MAX_LENGTH;
	}
	BookShop() : Max_length(DEFAULT_MAX_LENGTH), Length(0) {
		Nodes = new Book * [Max_length];
	}
	BookShop(unsigned int Max_length) : Length(0) {
		this->Max_length = Max_length;
		Nodes = new Book<T>* [Max_length];
	}
	~BookShop() {
		for (int i = 0; i < Length; i++)
			delete Nodes[i];
		delete[] this->Nodes;
		cout << "BookShop iznicinats!" << endl;
	}
	void Add(Book<T>* book) {
		if (Length == Max_length)
			throw OverflowException();
		Nodes[Length++] = book;
		cout << "Objekts " << Length << " pievienots!" << endl;
	}
	T GetMaxPrice() {
		T max = NULL;
		for (int i = 0; i < Length; i++) {
			T tmp = Nodes[i]->Getcena_par_gabalu();
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

	    //Statiskās metodes BookShop<float::GetDefaultMaxLength() izpilde
		cout << "Statiska metode BookShop::GetDefaultMaxLength(): " 
			 << BookShop<float>::GetDefaultMaxLength()
			 << endl;

		cout << "\nBookShop<float> parbaude!" << endl;

		//float tipa BookShop objekta izveide
		BookShop<float>* FloatBookShop1 = new BookShop<float>(4);
		
		//Dažadu Book<float> objektu izveide.
		Book<float>* FloatBook1 = new Book<float>();
		Book<float>* FloatBook2 = new Book<float>("128918329", "Matematika Nr.2", 15.99, "J. Naupe");
		Book<float>* FloatBook3 = new Book<float>("928918920", "Matematika Nr.33", 12.97, "J. Naupe");
		Book<float>* FloatBook4 = new Book<float>();
		Book<float>* FloatBook5 = new Book<float>();

		//Metodes BookShop<float>::GetMaxLength() izpilde - izvada konkrētā BookSjop masīva maksimālo izmēru!
		cout << "\nMetode BookShop::GetMaxLength(): "
			 << FloatBookShop1->GetMaxLength()
			 << endl;
		
		//Book<float> obkektu ievietošana BookShop objekta masīvā.
		cout << endl;
		try {
			FloatBookShop1->Add(FloatBook1);
			FloatBookShop1->Add(FloatBook2);
			FloatBookShop1->Add(FloatBook3);
			FloatBookShop1->Add(FloatBook4);
			FloatBookShop1->Add(FloatBook5);
		}
		catch (OverflowException&) {
			cout << "Kluda: maksimalais izmers sasniegts!" << endl;
		}
		catch (...) {
			cout << "Nezināma kluda!" << endl;
		}

		//BookShop<float> masīva elementu izvade jeb BookShop::Print().
		FloatBookShop1->Print();

		delete FloatBookShop1;
		
		cout << "\n---------------------------------------------------------\n" << endl
			 << "BookShop<double> parbaude!" << endl;


		//double tipa BookShop objekta izveide
		BookShop<double> *DoubleBookShop1 = new BookShop<double>(3);

		//Dažadu Book<double> objektu izveide.
		Book<double>* DoubleBook1 = new Book<double>();
		Book<double>* DoubleBook2 = new Book<double>("128918329", "Matematika Nr.2", 15.99, "J. Naupe");
		Book<double>* DoubleBook3 = new Book<double>("928918920", "Matematika Nr.33", 12.97, "J. Naupe");
		Book<double>* DoubleBook4 = new Book<double>();
		Book<double>* DoubleBook5 = new Book<double>();


		//Metodes BookShop::GetMaxLength() izpilde - izvada konkrētā BookSjop masīva maksimālo izmēru!
		cout << "\nMetode BookShop::GetMaxLength(): "
			<< DoubleBookShop1->GetMaxLength()
			<< endl;

		//Book obkektu ievietošana BookShop objekta masīvā.
		cout << endl;
		try {
			DoubleBookShop1->Add(DoubleBook1);
			DoubleBookShop1->Add(DoubleBook2);
			DoubleBookShop1->Add(DoubleBook3);
			DoubleBookShop1->Add(DoubleBook4);
			DoubleBookShop1->Add(DoubleBook5);
		}
		catch (OverflowException&) {
			cout << "Kluda: maksimalais izmers sasniegts!" << endl;
		}
		catch (...) {
			cout << "Nezināma kluda!" << endl;
		}

		//BookShop masīva elementu izvade jeb BookShop::Print().
		DoubleBookShop1->Print();

		delete DoubleBookShop1;

	
	return 0;
}
