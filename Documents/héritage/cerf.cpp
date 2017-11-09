#include "cerf.h"
Cerf::Cerf(string thisName,string thisDteN,Animal* thisPere,Animal* thisMere,int thisBois)
		:Animal(thisName,thisDteN,thisPere,thisMere)
		{
			bois=thisBois;
			display();
		}
void Cerf::display()
{
	cout<<"Bonjour je suis un cerf"<<endl;
	cout<<"donc je ralle (RRRRRRRRRRRRRRRR)"<<endl;
	Animal::display();
	cout<<"j'ai des bois de "<<bois<<"cm"<<endl;
}
void Cerf::crier()
{
}