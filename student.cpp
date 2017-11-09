//#define DEBUG 
#include "student.h"
string Student::getName()
{
	return name;
}
void Student::setName(string thisName)
{
	#ifdef DEBUG
	cout<<"void Student::setName(string thisName)"<<endl;
	#endif
	name=thisName;
}
string Student::getSurname()
{
	return surname;
}
void Student::setSurname(string thisSurname)
{
	#ifdef DEBUG
	cout<<"void Student::setSurname(string thisSurname)"<<endl;
	#endif
	surname=thisSurname;
}
int Student::getAge()
{
	#ifdef DEBUG
	cout<<"int Student::getAge()"<<endl;
	#endif
	return age;
}
void Student::setAge(int thisAge)
{
	#ifdef DEBUG
	cout<<"void Student::setAge(int thisAge)"<<endl;
	#endif
	age=thisAge;
}
void Student::display()
{
	#ifdef DEBUG
	cout<<"void Student::display()"<<endl;
	#endif
	cout<<"Nom: "<<name<<endl;
	cout<<"Prenom: "<<surname<<endl;
	cout<<"Age: "<<age<<endl;
}
void Student::input()
{
	#ifdef DEBUG
	cout<<"void Student::input()"<<endl;
	#endif
	cout<<"Votre nom: ";
	getline(cin,name);
	cout<<endl<<"Votre prenom: ";
	getline(cin,surname);
	cout<<endl<<"Votre âge: ";
	cin>>age;
	cin.ignore(1);
}
void Student::displayNP()
{
	#ifdef DEBUG
	cout<<"void Student::displayNP()"<<endl;
	#endif
	cout<<name<<"  "<<surname<<" ";
}
void Student::addBulletin(Bulletin thisBulletin)
{
	vectBulletin.push_back(thisBulletin);
}
vector<Bulletin>* Student::getBulletin()
{
	return &vectBulletin;
}