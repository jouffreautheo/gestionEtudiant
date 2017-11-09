#ifndef PHACOCHERE
#define PHACOCHERE value
#include "animal.h"

class Phacochere: public Animal
{
	protected:
		int sabot;
	public:
	Phacochere(string thisName,string thisDteN,Animal* thisPere,Animal* thisMere,int thisSabot);
	void display();
	void crier();
};
#endif