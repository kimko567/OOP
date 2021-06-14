#include <iostream>
#include <string>
using namespace std;

class Article {

	private:
		string svītru_koda_numurs;
		string nosaukums;
		float cena_par_gabalu;

	public:
		//Inicializatoru izmantošana
		Article(): svītru_koda_numurs("_"), nosaukums("_"), cena_par_gabalu(-1){
		}
		Article(string svītru_koda_numurs, string nosaukums, float cena_par_gabalu) {
			this->svītru_koda_numurs = svītru_koda_numurs;
			this->nosaukums = nosaukums;
			this->cena_par_gabalu = cena_par_gabalu;
		}
		~Article() {
			cout << "Sveiciens no \"" << this->nosaukums << "\" desturktora!" << endl;
		}
		const void Print() {
			cout << endl
				 << "\tSvitru koda numurs: " << this->svītru_koda_numurs << endl
				 << "\tNosaukums: " << this->nosaukums << endl
				 << "\tCena par gabalu: " << this->cena_par_gabalu << endl
				 << endl;
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

int main() {

	//Noklusējamais konstruktors - inicializatoru pārbaudei!
	Article def;
	cout << "\'Tukss\' objekts: ";
	def.Print();
	cout << endl;

	//statiskā objekta deklaracīja un inicializācija
	Article static_article("123331222312", "Paparde", 9.99f);
	//dinamiskā objekta deklaracīja un inicializācija
	Article *dynamic_article = new Article("1829112223", "Amortizators", 133.33f);

	//void Print() metodes izmantošana
	cout << "Statiskais objekts:";
	static_article.Print();
	cout << "Dinamiskais objekts:";
	dynamic_article->Print();

	//T GetX() metodes izmantošana
	cout <<"static_article.Getnosaukums() (getter) : " << static_article.Getnosaukums() << endl;
	cout << "dynamic_article.Getcena_par_gabalu() (getter) : " << dynamic_article->Getcena_par_gabalu() << endl;

	//void SetX() metodes izmantošana
	static_article.Setnosaukums("Jaunais nosaukums");
	dynamic_article->Setcena_par_gabalu(100.0f);
	cout << endl
		 << ">static_article.Setnosaukums(\"Jaunais nosaukums\")" << endl
		 << ">dynamic_article->Setcena_par_gabalu(100.0f)" << endl
		 << endl;

	//void Print() metodes izmantošana
	cout << "Statiskais objekts pec izmainam:";
	static_article.Print();
	cout << "Dinamiskais objekts pec izmainam:";
	dynamic_article->Print();

	//Dinamiskā objekta iznīcināšana
	delete dynamic_article;

	return 0;
