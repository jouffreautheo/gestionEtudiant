#include "section.h"
//#define DEBUG 
#include "application.h"

string Section::getName()
{
	return name;
}
void Section::setName(string thisName)
{
	#ifdef DEBUG
	cout<<"void Section::setName(string thisName)"<<endl;
	#endif
	name=thisName;
}
void Section::input()
{
	#ifdef DEBUG
	cout<<"void Section::input()"<<endl;
	#endif
	cout<<"Nom de la section: ";
	getline(cin,name);
	cout<<endl;
}
void Section::display()
{
	#ifdef DEBUG
	cout<<"void Section::display()"<<endl;
	#endif
	cout<<"Section :"<<name<<endl;
}
void Section::run()						
{
	#ifdef DEBUG
	cout<<"void Section::run()"<<endl;
	#endif
	char leChoix;
	do
	{
		display();
		displayMenu();
		leChoix=controlChoice();
		system ("clear");
		doChoice(leChoix);
	}
	while(leChoix!='9');
}
void Section::displayMenu()
{
	#ifdef DEBUG
	cout<<"void Section::displayMenu()"<<endl;
	#endif
	cout<<"_____________________________________________________________________________________"<<endl;
	cout<<"|1:Ajouter un éleve                  |            2:Rajouter une matiere à la section|"<<endl;
	cout<<"|3:Ajouter une évalutaion            |               4:Afficher toustes les évalution|"<<endl;
	cout<<"|5:Afficher la liste des éleves      |    6:Afficher toutes les matiere de la section|"<<endl;
	cout<<"|7:Accerder au bulletin d'un éléve   |          8:Rajouter une apprication à un éléve|"<<endl;
	cout<<"|9:Retour au menu principal          |                                               |"<<endl;
	cout<<"|____________________________________|_______________________________________________|"<<endl;
}
char Section::controlChoice()
{
	#ifdef DEBUG
	cout<<"char Section::controlChoice()"<<endl;
	#endif
	char choice;
	cout<<"choix: ";
	cin>>choice;
	cin.ignore(1);
	if(choice>=9 and choice<=1)
	{
		cout<<"Erreur dans la saisie du choix"<<endl;
	}
	else return choice;
}
void Section::doChoice(char theChoice)
{
	#ifdef DEBUG
	cout<<"void Section::doChoice(char theChoice)"<<endl;
	#endif
	string search;
	Student o;
	switch (theChoice)
		{			
			case '1' :
				addStudent();
				break;
			case '2' :
				addSubject();
				break;
			case '3' :
				addControl();
				break;
			case '4' :
				displayControl();
				break;
			case '5' :
				displayStudent();
				break;
			case '6' :
				displaySubject();
				break;
			case '7' :
				displayBulletin();
				break;
			case '8' :
				addAppreciation();
		
		}
}
void Section::addStudent()
{
	#ifdef DEBUG
	cout<<"void Section::addStudent()"<<endl;
	#endif
	Student nouvelEleve;
	nouvelEleve.input();
	vectStudent.push_back(nouvelEleve);
	system ("clear");
}
void Section::addControl()
{
	#ifdef DEBUG
	cout<<"void Section::addControl()"<<endl;
	#endif
	if (vectStudent.size()==0 or vectPSubject.size()==0)
	{
		cout<<"Pas d'éléves enregistré ou de matiere enregistré"<<endl;

	}
	else
	{
		Control nouveauControle;
		nouveauControle.input();
		int leChoix;
		displaySubject();
		cout<<"Choix: ";
		cin>>leChoix;
		//Verif que le choix soit correcte

		nouveauControle.setSubject(&app->vectSubject[leChoix-1]);
		for(unsigned int compteur=0;compteur<vectStudent.size();compteur++)
		{
			vectStudent[compteur].displayNP();
			nouveauControle.addNote(Note(&vectStudent[compteur]));
		}
		vectControl.push_back(nouveauControle);
	}
	
	
}
void Section::addSubject()
{
	#ifdef DEBUG
	cout<<"void Section::addSubject()"<<endl;
	#endif
	int leChoix;
	int leCoeff;
	int nbPSubject=vectPSubject.size();
	bool presence=false;
	app->displaySubject(true);
	cout<<"Choix: ";
	cin>>leChoix;
	for (int compteur = 0; compteur < nbPSubject ; compteur++) //boucle pour effectuer tous les test
	{
		if (&app->vectSubject[leChoix-1]==vectPSubject[compteur])  //Si le choix a deja etait ajouter on ne le remet pas
		{
			presence=true;
		}	
	}
	if (presence==false)
	{
		cout<<"Coeff: ";
		cin>>leCoeff;
		vectCoeff.push_back(leCoeff);
		vectPSubject.push_back(&app->vectSubject[leChoix-1]);
		system ("clear");
	}
	else
		cout<<"La matiere est deja presente dans cette section"<<endl;
	
}
void Section::displayStudent()
{
	#ifdef DEBUG
	cout<<"void Section::displayStudent()"<<endl;
	#endif
	int nbStudent=vectStudent.size();
		if(nbStudent==0)
		{
			cout<<endl<<"Aucun éleve n'est enregistre"<<endl;
		}
		for(int compteur=0;compteur<nbStudent;compteur++)
		{
			vectStudent[compteur].display();
		}
	cout<<endl;
}
void Section::displaySubject()
{
	#ifdef DEBUG
	cout<<"void Section::displaySubject()"<<endl;
	#endif
	int nbSubject=vectPSubject.size();
		if(nbSubject==0)
		{
			cout<<endl<<"Aucune matière n'est enregistre"<<endl;
		}
		for(int compteur=0;compteur<nbSubject;compteur++)
		{
			cout<<compteur+1<<".";
			vectPSubject[compteur]->display();
			cout<<"(Coeff "<<vectCoeff[compteur]<<")"<<endl;
		}
		cout<<endl;

}
void Section::displayControl()
{
	#ifdef DEBUG
	cout<<"void Section::displayControl()"<<endl;
	#endif
	int nbControl=vectControl.size();
	int nbStudent=vectStudent.size();
	int selection;
		if(nbControl==0)
		{
			cout<<endl<<"Aucun control n'est enregistre"<<endl;
		}
		else
		{
			for(int compteur=0;compteur<nbControl;compteur++)
			{
				cout<<compteur+1<<".";
				vectControl[compteur].display();
			}
			cout<<"Choix du controle: ";
			cin>>selection;
				system ("clear");
				vectControl[selection-1].display();
				vectControl[selection-1].getSubject();
				cout<<endl;
				for (int compteurBis=0; compteurBis<nbStudent;compteurBis++)
				{				
					vectStudent[compteurBis].displayNP();
					vectControl[selection-1].displayNote(compteurBis); // Y correspond au controle et le i correspond à l'etudiant
				}	
		}
	cout<<endl;

}
void Section::displayBulletin()
{
	#ifdef DEBUG
	cout<<"void Section::displayBulletin()"<<endl;
	#endif
	int choix;
	int compteurMoy=0;
	int compteurMoyG=0;
	float somme=0.0;
	float moyenne=0.0;
	float sommeG=0.0;
	float moyenneG=0.0;
	int nbSubject=vectPSubject.size();
	int nbControl=vectControl.size();
	int nbStudent=vectStudent.size();
	for(int y=0;y<nbStudent;y++)
	{
		cout<<y+1<<".";
		vectStudent[y].displayNP();
		cout<<endl;
	}
	cout<<"Choix d'un éleve :";
	cin>>choix;
		//afficher les notes correspondantes au matieres/controles que l'étudiant a fait
		for(int compteur=0;compteur<nbSubject;compteur++)
		{
			vectPSubject[compteur]->display();
			cout<<"(Coeff "<<vectCoeff[compteur]<<"):";
			for (int compteurBis=0; compteurBis<nbControl;compteurBis++)
				{	
					if (vectPSubject[compteur]==vectControl[compteurBis].getSubject())
						{
							vectControl[compteurBis].displayNote(choix-1);
							somme+=vectControl[compteurBis].getVecNote()->at(choix-1).getNote();
							compteurMoy++;
						}
				}
			moyenne=somme/compteurMoy;
			sommeG+=somme*vectCoeff[compteur];
			compteurMoyG+=compteurMoy*vectCoeff[compteur];
			cout<<"Moyenne: "<<setprecision(3)<<moyenne<<endl;
			somme=0.0;
			compteurMoy=0.0;
			vectStudent[choix-1].getBulletin()->at(0).display(compteur);
		}
	moyenneG=sommeG/compteurMoyG;
	cout<<"Moyenne générale pondéré: "<<setprecision(3)<<moyenneG<<endl;
}
void Section::addAppreciation()
{
	#ifdef DEBUG
	cout<<"void Section::addAppreciation()"<<endl;
	#endif
	//selection d'un eleve
	int choix;
	string appreciation;
	Bulletin nouveauBulletin;
	int nbStudent=vectStudent.size();
	int nbSubject=vectPSubject.size();
	for(int numeroEleve=0;numeroEleve<nbStudent;numeroEleve++)
		{
			cout<<numeroEleve+1<<".";
			vectStudent[numeroEleve].displayNP();
			cout<<endl;
		}
	if (nbStudent>0)
	{
		cout<<"Choix d'un éleve :";
		cin>>choix;
		cin.ignore(1);
		//correction du decalage entre le no de case et le nombre tapé
		choix--;

		system ("clear");
		if (choix>=0 and choix<=nbStudent)
			{
				//boucle des matières 
				for(int numeroMatiere=0;numeroMatiere<nbSubject;numeroMatiere++)
					{
						vectPSubject[numeroMatiere]->display();
						//mettre une appreciation pour chaque matières
						cout<<endl<<"Appreciation: ";
						getline(cin,appreciation);
						nouveauBulletin.vectAppreciation.push_back(appreciation);
						system ("clear");
					}
				//associer un élève aux appreciation
				vectStudent[choix].addBulletin(nouveauBulletin);
			}
		else 
			{
				cout<<"mauvaise saisie"<<endl;
				system ("clear");
			}
	
	}
}	
Section::Section(Application* app)
{
	this->app=app;
}
