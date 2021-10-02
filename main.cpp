#include "etudiant.h"

//float division(int a, int b){
//	if(b == 0)
//		throw "Division par zero !!";
//	return a/b;
//}
//
//main(){
//	int a,b;
//	
//	cout<<"Donnez a: ";
//	cin>>a;
//	cout<<"Donnez b: ";
//	cin>>b;
//	
//	try{
//		cout<<division(a,b);
//	}catch(const char* msg){
//		cerr<<msg; //character error
//	}
//	
//	
//	cout<<"end";
//}

main(){
	etudiant e1(1, "Azdad", "Anas");
	etudiant e2(2, "Dabaghi", "Hamza");
	etudiant e3(3, "Alami", "Hicham");
	
	//e1.afficher();
	
	tabEtudiant T(2);
	
	try{
		T.add(e1);
		T.tailleActuelle();
		
		T.add(e2);
		T.tailleActuelle();
		
		T.add(e3);
		T.tailleActuelle();
	}catch(expt* ex){
		cout<<ex->getMess()<<endl;
	}
	
	
	cout<<"end";
}
