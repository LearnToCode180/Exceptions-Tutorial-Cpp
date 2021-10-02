#include "etudiant.h"

etudiant::etudiant(){
	
}

etudiant::etudiant(int id,string n,string p):nom(n),prenom(p){
	this->id = id;
}
void etudiant::afficher(){
	cout<<id<<" - "<<nom<<" - "<<prenom;
}

//**********************************************************************

tabEtudiant::tabEtudiant(int n){
	this->size = n;
	this->crtSize = 0;
	this->T = new etudiant[n];
}

void tabEtudiant::add(etudiant e){
	if(crtSize < size){
		T[crtSize] = e;
		crtSize++;
	}else{
//		throw "Tableau est sature !";
		throw new expt("Tableau est sature !");
	}
		
}

void tabEtudiant::tailleActuelle(){
	cout<<"Taille Actuelle: "<<crtSize<<endl;
}

//***********************************************************

expt::expt(string s): msg(s){
	
}
string expt::getMess(){
	return msg;
}

