#include "lion.h"
Lion::Lion(string thisName,string thisDteN,Animal* thisPere,Animal* thisMere,int thisCriniere)
		:Animal(thisName,thisDteN,thisPere,thisMere)
		{
			criniere=thisCriniere;
			display();
		}
void Lion::display()
{
	cout<<"Bonjour je suis un lion"<<endl;
	cout<<"donc je rugis (GRAOUHHHHHHHHH)"<<endl;
	Animal::display();
	cout<<"j'ai une criniere de "<<criniere<<" cm de diamètre"<<endl;
}
void Lion::crier()
{
	
}