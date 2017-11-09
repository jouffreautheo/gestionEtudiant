using namespace std;
#include <iostream>
int main(){
	int nb1;                                          //Taf 1
	int nb2;
	cout<<"Premier entier: ";
	cin>>nb1;
	cout<<"Deuxieme entier: ";
	cin>>nb2;
	int * pLePlusGrand;
	int * pLePlusPetit;
	if(nb1>=nb2)
	{
		pLePlusGrand=&nb1;
		pLePlusPetit=&nb2;
	}
	else
	{
		pLePlusGrand=&nb2;
		pLePlusPetit=&nb1;
	}
	cout<<"Du plus petit au plus grand :"<<endl<<*pLePlusPetit<<endl<<*pLePlusGrand<<endl;
	cout<<"L'adresse du premier nombre est: "<<&nb1<<" et l'adresse du deuxieme nombre est: "<<&nb2<<endl;						//Taf2
}
