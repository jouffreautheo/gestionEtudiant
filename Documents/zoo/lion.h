#ifndef LION
#define LION value
#include "animal.h"
class Lion: public Animal
{
	protected:
		int criniere;
	public:
	Lion(string thisName,string thisDteN,Animal* thisPere,Animal* thisMere,int thisCriniere);
	void display();
	void crier();
};
#endif