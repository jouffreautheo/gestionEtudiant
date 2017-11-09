#ifndef KANGOUROU
#define KANGOUROU value
#include "animal.h"
class Kangourou: public Animal
{
	private:
		static void displayNbKang();
	public:
		Kangourou(string thisName,string thisDteN,Animal* thisPere,Animal* thisMere);
		~Kangourou();
		void display();
		static int nbKang;
		void crier();
	
};
#endif