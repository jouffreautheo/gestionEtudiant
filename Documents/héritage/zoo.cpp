#include "lion.h"
#include "phacochere.h"
#include "cerf.h"
#include "kangourou.h"
#include <vector>

int main()
{
	Lion roiLion("Simba","14/02/1965",NULL,NULL,15);
	Lion roiLion2("Scar","04/12/1965",NULL,NULL,25);
	Cerf bambi("bambi","15/07/1947",NULL,NULL,110);
	Phacochere pumba("pumba","09/11/1994",&bambi,&roiLion,10);
	Kangourou kangourex("kangourex","01/02/1995",&pumba,&bambi);
	Kangourou walibi("walibi","04/07/1995",&kangourex,&roiLion2);
}