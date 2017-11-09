#include "kangourou.h"
int Kangourou::nbKang=0;
Kangourou::Kangourou(string thisName,string thisDteN,Animal* thisPere,Animal* thisMere)
		:Animal(thisName,thisDteN,thisPere,thisMere)
		{
			nbKang++;	
			display();
			displayNbKang();
		}
Kangourou::~Kangourou()
{
	nbKang--;
}
void Kangourou::display()
{
	cout<<"Bonjour je suis un kangourou"<<endl;
	cout<<"donc je grogne (GREEEHHHHHH)"<<endl;
	Animal::display();
}
void Kangourou::displayNbKang()
{
	cout<<"Il y a "<<nbKang<<" kangourou dans le zoo!"<<endl;
}
void Kangourou::crier()
{
}