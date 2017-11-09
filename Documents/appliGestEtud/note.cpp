#include "note.h"
#include <cstdlib>
//#define DEBUG 
int Note::getNote()
{
	return note;
}
void Note::setNote(int thisNote)
{
	#ifdef DEBUG
	cout<<"void Note::setNote(int thisNote)"<<endl;
	#endif
	note=thisNote;
}
void Note::input()
{
	#ifdef DEBUG
	cout<<"void Note::input()"<<endl;
	#endif
	cout<<"(Note sur 20): ";
	cin>>note;
	if (note<0 or note>20)
	{
		cout<<"impossible d'avoir cette note , la note est comprise entre 0 et 20 donc pour triche vous obtener 0"<<endl;
		note=0;
	}
}
Note::Note(Student* pStudent)
{
	this->pStudent=pStudent;
}
void Note::display()
{
	#ifdef DEBUG
	cout<<"void Note::display()"<<endl;
	#endif
	cout<<note;
}