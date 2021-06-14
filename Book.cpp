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

int main() {

	// Superklases objektu dinamisks masīvs
	Article* array[] = {
		new Article(),
		new Article("19212221", "Paparde", 9.92f),
		new Book(),
		new Book("128918329", "Matematika Nr.2", 15.99f, "J. Naupe")
	};

	//Masīva elementu izvadīšana uz ekrāna
	cout << "Masiva elementu Print() metodes parbaude!" << endl;
	for (auto item : array)
		item->Print();

	//Atmiņas atbrīvošana
	cout << "\nMaisva elementu iznicinasana!" << endl;
	for (auto item : array) {
		delete item;
		cout << endl;
	}

	return 0;
}
