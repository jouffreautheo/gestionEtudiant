#ifndef CERF
#define CERF value
#include "animal.h"
class Cerf: public Animal
{
	protected:
		int bois;
	public:
	Cerf(string thisName,string thisDteN,Animal* thisPere,Animal* thisMere,int thisBois);
	void display();
	void crier();
};
#endif