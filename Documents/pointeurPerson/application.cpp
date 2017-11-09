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
	// on libere la place des pointeurs

	for (int x=0;x<vectPPerson.size();x++)
	{
		delete(vectPPerson[x]);
	}

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
	Person *pAAjouter= new Person;
	pAAjouter->input();
	vectPPerson.push_back(pAAjouter);
}		
void Application::displayPerson()
{
	int nbPerson=vectPPerson.size();
	if(nbPerson==0)
	{
		cout<<endl<<"Personne n'est enregistre"<<endl;
	}
	for(int i=0;i<nbPerson;i++)
	{
		vectPPerson[i]->display();
	}
}
Person Application::searchPerson(string theSearch)
{
	Person y;
	for(int i=0;i<vectPPerson.size();i++)
	{	
		if(vectPPerson[i]->getName()== theSearch or vectPPerson[i]->getSurname()== theSearch)
		{
			return *vectPPerson[i];
		}
	}
	return y;
}

