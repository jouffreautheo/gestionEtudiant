#include "phacochere.h"
Phacochere::Phacochere(string thisName,string thisDteN,Animal* thisPere,Animal* thisMere,int thisSabot)
		:Animal(thisName,thisDteN,thisPere,thisMere)
		{
			sabot=thisSabot;
			display();
		}
void Phacochere::display()
{
	cout<<"Bonjour je suis un phacochere"<<endl;
	cout<<"donc je gromelle (GRUIC GRUIC)"<<endl;
	Animal::display();
	cout<<"j'ai un sabot de "<<sabot<<" cm"<<endl;
}
void Phacochere::crier()
{
}