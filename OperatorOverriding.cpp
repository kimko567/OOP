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
	friend ostream& operator <<(ostream& O, const Article& at);

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
	friend ostream& operator <<(ostream& O, const Article& at);
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
		Nodes = new Book * [Max_length];
	}
	BookShop(unsigned int Max_length) : Length(0) {
		this->Max_length = Max_length;
		Nodes = new Book * [Max_length];
	}
	~BookShop() {
		for (int i = 0; i < Length; i++)
			delete Nodes[i];
		delete[] this->Nodes;
		cout << "BookShop iznicinats!" << endl;
	}
	void Add(Book* book) {
		if (Length == Max_length)
			throw OverflowException();
		Nodes[Length++] = book;
		cout << "Objekts " << Length << " pievienots!" << endl;
	}

	void operator+=(Book* b) {
		if (Length == Max_length)
			throw OverflowException();
		Nodes[Length++] = b;
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
	friend ostream& operator <<(ostream& O, const BookShop& at);
};

ostream& operator <<(ostream& O, const Article& at) {
	O << endl
		<< "\tSvitru koda numurs: " << at.Getsvītru_koda_numurs() << endl
		<< "\tNosaukums: " << at.Getnosaukums() << endl
		<< "\tCena par gabalu: " << at.Getcena_par_gabalu() << endl;
	return O;
}

ostream& operator <<(ostream& O, const Book& b) {
	O << endl
		<< "\tSvitru koda numurs: " << b.Getsvītru_koda_numurs() << endl
		<< "\tNosaukums: " << b.Getnosaukums() << endl
		<< "\tCena par gabalu: " << b.Getcena_par_gabalu() << endl
		<< "\tAutors: " << b.GetAuthor() << endl;
	return O;
}

ostream& operator <<(ostream& O, const BookShop& bs) {
	O << "\nBookShop: " << endl;
	for (int i = 0; i < bs.Length; i++) {
		O  << *bs.Nodes[i];
	}
	O << endl;
	return O;
}



int main() {
	BookShop bs(4);
	
	Book* b1 = new Book();
	Book* b2 = new Book("Naupe", "Paupe", 19.01f, "Kuki");
	
	cout << bs;

	cout << "---------------------------" << endl;
	cout << *b1;
	cout << "Tiek pievienota gramata!" << endl;
	bs += b1;

	cout << bs;

	cout << "---------------------------" << endl;
	cout << *b2;
	cout << "Tiek pievienota gramata!" << endl;
	bs += b2;

	cout << bs;

	return 0;
}
© 2021 GitHub, Inc.
