using namespace std;
#include <iostream>
#include <vector>
/**
 *\file bulletin.h
 *\autor Theo Jouffreau
 *\version 0.1
 *\date 12 octobre 2017
 */

/**
 *\class Bulletin
 *\brief Classe concernant les appréciations.
 * Cette classe a pour but de rentrer des appréciations sur le bulletin d'un élève.
 */
class Bulletin
{
	public:
		/**
		 *\brief Ce vecteur va enregitrer les différentes appréciations , ensuite il va falloir afficher la bonne appréciation pour chaque matière.
		 * On peut le faire facilement avec une saisie d'information dans une boucle puis l'affichage dans une double boucle avec la première étant les matières et 
		 * la seconde les appréciations.
		 *\todo Faire la gestion et l'affichage des appréciations.
		 */
		vector <string> vectAppreciation;
		/**
		 *\brief Affiche les appréciations du bulletin.
		 */
		void display(int leCompteur);
};
