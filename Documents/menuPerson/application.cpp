#include "application.h"

void Application::run()						//fait tourner l'application
{
char leChoix;
	do
	{
		displayMenu();
		leChoix=controlChoice();
		doChoice(leChoix);
	}
	while(leChoix!='4');	
}	
void Application::displayMenu()
{	
	cout<<"Ajouter une personne: 1                Rechercher une personne: 2"<<endl;
	cout<<"Afficher toutes les personnes: 3       Quitter l'application: 4"<<endl;
}
char Application::controlChoice()
{
	char choice;
	cout<<"choix: ";
	cin>>choice;
	cin.ignore(1);
	if(choice!='1' and choice!='2' and choice!='3' and choice!='4')
	{
	cout<<"Erreur dans la saisie du choix"<<endl;
	}
	else return choice;		
}
void Application::doChoice(char theChoice)
{
	string search;
	Person o;
	switch (theChoice)
	{
		case '1' :
			addPerson();
			break;
		case '2' :
			cout<<"Rentrer le nom/pernom d'une personne :";
			cin>>search;
			o=searchPerson(search);
			if(o.getName()!="")
			{
				o.display();
			}
			else cout<<"Aucune personne ne correspond à votre recherche"<<endl;
			break;
		case '3' :
			displayPerson();
			break;
	}
}
void Application::addPerson()
{
	Person p;
	p.input();
	vectPerson.push_back(p);
}		
void Application::displayPerson()
{	
	int nbPerson=vectPerson.size();
	if(nbPerson==0)
	{
		cout<<endl<<"Personne n'est enregistrer"<<endl;
	}
	for(int i=0;i<nbPerson;i=i+1)
	{
		vectPerson[i].display();
	}
}
Person Application::searchPerson(string theSearch)
{
Person y;
	for(int i=0;i<vectPerson.size();i=i+1)
	{	
		if(vectPerson[i].getName()== theSearch or vectPerson[i].getSurname()== theSearch)
		{
			return vectPerson[i];
		}
	}
	return y;
}
	
