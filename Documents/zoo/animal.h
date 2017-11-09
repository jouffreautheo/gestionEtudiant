#ifndef ANIMAL
#define ANIMAL value
using namespace std;
#include <iostream>
class Animal
{
	protected:
		string name;
		string dteN;
		Animal* pere;
		Animal* mere;
		static void displayNbAnimaux();
		virtual void crier()=0;
	public:
		static int nbAnimaux;
		Animal(string thisName,string thisDteN,Animal* thisPere,Animal* thisMere);
		~Animal();
		void display();
};
#endif