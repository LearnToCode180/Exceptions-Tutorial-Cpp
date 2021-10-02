#include <iostream>
using namespace std;

class etudiant{
	int id;
	string nom;
	string prenom;
	
	public:
		etudiant();
		etudiant(int,string,string);
		void afficher();
};


class tabEtudiant{
	etudiant *T;
	int size;
	int crtSize;
	
	public:
		tabEtudiant(int);
		void add(etudiant);
		void tailleActuelle();
};

class expt{
	string msg;
	
	public:
		expt(string);
		string getMess();
};
