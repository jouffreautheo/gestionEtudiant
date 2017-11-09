#include "lion.h"
#include "phacochere.h"
#include "cerf.h"
#include "kangourou.h"
#include <vector>

int main()
{
	vector<Animal*> vectMesAnimaux; 
	vectMesAnimaux.push_back(new Lion ("Simba","14/02/1965",NULL,NULL,15));
	vectMesAnimaux.push_back(new Lion ("Scar","04/12/1965",NULL,NULL,25));
	vectMesAnimaux.push_back(new Cerf("bambi","15/07/1947",NULL,NULL,110));
	vectMesAnimaux.push_back(new Phacochere ("pumba","09/11/1994",NULL,NULL,10));
	vectMesAnimaux.push_back(new Kangourou("kangourex","01/02/1995",NULL,NULL));
	vectMesAnimaux.push_back(new Kangourou ("walibi","04/07/1995",NULL,NULL));
	unsigned int nbAnimaux=Animal::nbAnimaux;
	for (unsigned int noAnim = 0; noAnim < nbAnimaux; noAnim++)
	{
		delete vectMesAnimaux[noAnim];
	}
}
