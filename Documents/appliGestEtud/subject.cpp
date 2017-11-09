#include "subject.h"
//#define DEBUG 
string Subject::getName()
{
	return name;
}
void Subject::setName(string thisName)
{
	#ifdef DEBUG
	cout<<"void Subject::setName(string thisName)"<<endl;
	#endif
	name=thisName;
}
void Subject::input()
{
	#ifdef DEBUG
	cout<<"void Subject::input()"<<endl;
	#endif
	cout<<"Nom de la matiere: ";
	getline(cin,name);
	cout<<endl;
}
void Subject::display()
{
	#ifdef DEBUG
	cout<<"void Subject::display()"<<endl;
	#endif
	cout<<"Matiere: "<<name;
	
}
