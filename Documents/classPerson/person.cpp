#include "person.h"

string Contact::getName()
{
	return contactName;
}
void Contact::setName(string thisName)
{
	contactName=thisName;
}
string Contact::getSurcontactName()
{
	return surcontactName;
}
void Contact::setSurcontactName(string thisSurcontactName)
{
	surcontactName=thisSurcontactName;
}
int Contact::getAge()
{
	return age;
}
void Contact::setAge(int thisAge)
{
	age=thisAge;
}
void Contact::display()
{
	cout<<"Nom: "<<contactName<<endl;
	cout<<"Prenom: "<<surcontactName<<endl;
	cout<<"Age: "<<age<<endl;
}
void Contact::input()
{
	cout<<"Votre nom: ";
	getline(cin,contactName);
	cout<<endl<<"Votre prenom: ";
	getline(cin,surcontactName);
	cout<<endl<<"Votre âge: ";
	cin>>age;
}	
