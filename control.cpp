#include "control.h"
//#define DEBUG 
string Control::getName()
{
	return name;
}
void Control::setName(string thisName)
{
	#ifdef DEBUG
	cout<<"void Control::setName(string thisName)"<<endl;
	#endif
	name=thisName;
}
void Control::input()
{
	#ifdef DEBUG
	cout<<"void Control::input()"<<endl;
	#endif
	cout<<"Nom du control: ";
	getline(cin,name);
	cout<<endl;
}
void Control::display()
{
	#ifdef DEBUG
	cout<<"void Control::display()"<<endl;
	#endif
	cout<<"Devoir: "<<name<<endl;
	cout<<endl;		
}
void Control::setSubject(Subject* thisSubject)
{
	#ifdef DEBUG
	cout<<"void Control::setSubject(Subject* thisSubject)"<<endl;
	#endif
	pSubject=thisSubject;
}
Subject* Control::getSubject()
{
	return pSubject;
}
void Control::addNote(Note thisNote)
{
	#ifdef DEBUG
	cout<<"void Control::addNote(Note thisNote)"<<endl;
	#endif
	vectNote.push_back(thisNote);
	vectNote.back().input();

	
}
void Control::displayNote(int eleve)
{	
	#ifdef DEBUG
	cout<<"void Control::displayNote(int eleve)"<<endl;		
	#endif
	vectNote[eleve].display();
	cout<<"/20"<<endl;
}
vector<Note>* Control::getVecNote()
{
	return &vectNote;
}