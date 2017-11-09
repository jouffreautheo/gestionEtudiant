#include "animal.h"

int Animal::nbAnimaux=0; 

Animal::Animal(string thisName, string thisDteN, Animal* thisPere, Animal* thisMere)
{
	name=thisName;
	dteN=thisDteN;
	pere=thisPere;
	mere=thisMere;	
	if (name=="bambi")
	{
		cout<<"**Naissance de bambi**"<<endl;
		displayNbAnimaux();
	}
	nbAnimaux++;
}
Animal::~Animal()
{
	nbAnimaux--;
	if (name=="bambi")
	{
		cout<<"**Mort de bambi**"<<endl;
		displayNbAnimaux();	
	}
	if (name=="pumba")
	{
		cout<<"**Mort de pumba**"<<endl;
		displayNbAnimaux();	
	}
	
}
void Animal::displayNbAnimaux()
{
	cout<<"Le nombre d'animaux: "<<nbAnimaux<<endl;
}
void Animal::display()
{
	cout<<"Nom: "<<name<<endl;
	cout<<"Date de naissance: "<<dteN<<endl;
	if (pere==0)
	{
		cout<<"Pere: "<<pere<<endl;
	}
	else cout<<"Pere: "<<pere->name<<endl;
	if (mere==0)
	{
		cout<<"Mere: "<<mere<<endl;
	}
	else cout<<"Mere: "<<mere->name<<endl;
}