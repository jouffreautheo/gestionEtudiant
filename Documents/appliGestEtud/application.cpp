#include "application.h"
//#define DEBUG            //Commande de debugage

void Application::run()						//fait tourner l'application
{
	char leChoix;
	do
	{
		displayMenu();
		leChoix=controlChoice(false);
		system ("clear");
		doChoice(leChoix);
	}
	while(leChoix!='6');
}	
void Application::displayMenu()
{	
	#ifdef DEBUG
	cout<<"void Application::displayMenu()"<<endl;
	#endif
	cout<<"_________________________________________________________________________"<<endl;
	cout<<"|1:Ajouter une section              |              2:Ajouter une matiere|"<<endl;
	cout<<"|3:Afficher toutes les sections     |     4:Afficher toutes les matieres|"<<endl;
	cout<<"|5:Accéder à une section            |            6:Quitter l'application|"<<endl;
	cout<<"|___________________________________|___________________________________|"<<endl;
}
char Application::controlChoice(bool choixSection)
{
	#ifdef DEBUG
	cout<<"char Application::controlChoice(bool choixSection)"<<endl;
	#endif
	char choice;
	cout<<"Votre choix: ";
	cin>>choice;
	cin.ignore(1);

	
		if(choice!='1' and choice!='2' and choice!='3' and choice!='4' and choice!='5' and choice!='6')
		{
			cout<<"Erreur dans la saisie du choix"<<endl;
		}
		else return choice;
	
}
void Application::doChoice(char theChoice)
{
	#ifdef DEBUG
	cout<<"void Application::doChoice(char theChoice)"<<endl;
	#endif
	switch (theChoice)
	{
		case '1' :
			addSection();
			break;
		case '2' :
			addSubject();
			break;
		case '3' :
			displaySection(false);
			break;
		case '4' :
			displaySubject(false);
			break;
		case '5' : 
			accesSection();
			break;
		
	}
}
void Application::addSection()
{
	#ifdef DEBUG
	cout<<"void Application::addSection()"<<endl;
	#endif
	int nbSection=vectSection.size();
	bool presence=false;
	int compteur=0;
	Section nouvelleSection(this);
	nouvelleSection.input();
	while (compteur < nbSection)
	{
		if (nouvelleSection.getName()==vectSection[compteur].getName())
			{
				presence=true;
			}	
		compteur++;
	}
	if (nouvelleSection.getName()=="")
	{
		presence=true;
	}
	if (presence==false)
	{
		vectSection.push_back(nouvelleSection);
		system ("clear");
	}
	else
	{
		system ("clear");	
		cout<<"Erreur, cette section existe déjà ou doit avoir au minimum 1 caractère!"<<endl<<endl;
	}
}
void Application::addSubject()
{
	#ifdef DEBUG
	cout<<"void Application::addSubject()"<<endl;
	#endif
	int nbSubject=vectSubject.size();
	bool presence=false;
	int compteur=0;
	Subject nouvelleMatiere;
	nouvelleMatiere.input();
	//Test de limitation des betise de l'utilisateur
	while (compteur < nbSubject) //While pour s'arreter des que l'on trouve une correspondance
	{
		if (nouvelleMatiere.getName()==vectSubject[compteur].getName())
		{
			presence=true;
		}
		compteur++;
	}
	if (nouvelleMatiere.getName()=="")
	{
		presence=true;
	}
	if (presence==false)
	{
		vectSubject.push_back(nouvelleMatiere);
		system ("clear");
	}
	else
	{
		system("clear");
		cout<<"Erreur, cette matiere existe deja ou elle doit avoir au minimum 1 caractère!"<<endl<<endl;
	}
}	
void Application::displaySection(bool avecNumero)
{
	#ifdef DEBUG
	cout<<"void Application::displaySection(bool avecNumero)"<<endl;
	#endif
	int nbSection=vectSection.size();
	if(nbSection==0)
	{
		cout<<endl<<"Aucune section n'est enregistre"<<endl;
	}
	for(int i=0;i<nbSection;i++)
	{
		if(avecNumero==true) cout<<i+1<<" ";
		vectSection[i].display();
		
	}
	cout<<endl;
}	
void Application::displaySubject(bool avecNumero)
{
	#ifdef DEBUG
	cout<<"void Application::displaySubject(bool avecNumero)"<<endl;
	#endif
	int nbSubject=vectSubject.size();
	if(nbSubject==0)
	{
		cout<<endl<<"Aucune matiere n'est enregistre"<<endl;
	}
	for(int i=0;i<nbSubject;i++)
	{
		if(avecNumero==true) cout<<i+1<<".";
		vectSubject[i].display();
		cout<<endl;
	}
	cout<<endl;
}
void Application::accesSection()
{
	#ifdef DEBUG
	cout<<"void Application::accesSection()"<<endl;
	#endif
	int leChoix;
	int compteur=0;
	bool presence=false;
	int nbSection=vectSection.size();
	//affichage de toutes les sections avec un numero devant puis l'utilisateur tape le numero souhaité
	displaySection(true);
	if (nbSection!=0)
	{
		cout<<"Gérer la section n°: ";
		cin>>leChoix;
		system ("clear");
		//contrôler le choix effectué
		if(leChoix>0 and leChoix<=nbSection)
			{
				vectSection[leChoix-1].run();
			}
			else
			{
				cout<<"Erreur dans la saisie , ce numero n'existe pas!";
			}			
	}
}