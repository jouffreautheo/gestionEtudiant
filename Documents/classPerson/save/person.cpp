#include "person.h"

string Person::getName()
{
	return name;
}
void Person::setName(string thisName)
{
	name=thisName;
}
string Person::getSurname()
{
	return surname;
}
void Person::setSurname(string thisSurname)
{
	surname=thisSurname;
}
int Person::getAge()
{
	return age;
}
void Person::setAge(int thisAge)
{
	age=thisAge;
}
void Person::display()
{
	cout<<"Nom: "<<name<<endl;
	cout<<"Prenom: "<<surname<<endl;
	cout<<"Age: "<<age<<endl;
}
void Person::input()
{
	cout<<"Votre nom: ";
	getline(cin,name);
	cout<<endl<<"Votre prenom: ";
	getline(cin,surname);
	cout<<endl<<"Votre âge: ";
	cin>>age;
}	
