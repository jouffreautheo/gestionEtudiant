#ifndef SUBJECT
#define SUBJECT
/**
 *\file subject.h
 *\autor Theo Jouffreau
 *\version 0.1
 *\date 12 octobre 2017
 */
using namespace std;
#include <iostream>
/**
 *\class Subject
 *\brief Classe concernant les matières.
 * La classe Subject permet de rentrer des matières , les afficher et modifier leurs noms dans le projet. Exemple la matière:Français ou encore Physique.
 */
class Subject
{
	private:
		/**
		 *\brief Le nom de la matière crée.
		 */
		string name;
	public:
		/**
		 *\brief Méthode pour obtenir le nom de la matière.
		 * exemple: objetMatière.getName()-> "Français".
		 *\return Nom de la matière.
		 */
		string getName();
		/**
		 *\brief Méthode pour modifier le nom d'une matière.
		 * exemple: objetMatière.setName("Physique").
		 */
		void setName(string thisName);
		/**
		 *\brief Méthode pour rentrer une matière.
 		 */
		void input();
		/**
		 *\brief Méthode pour afficher les détails d'une matière.
		 */
		void display();
};
#endif
