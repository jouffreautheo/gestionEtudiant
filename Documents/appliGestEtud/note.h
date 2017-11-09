using namespace std;
#include <iostream>
#include <vector>
#include "student.h"
/**
 *\file note.h
 *\autor Theo Jouffreau
 *\version 0.1
 *\date 12 octobre 2017
 */

/**
 *\class Note
 *\brief Classe concernant les notes.
 * La classe à pour but d'enregistrer des notes et de les affecter à des adresses d'étudiants pour que lorsque qu'on regarde les résultats aux évaluations d'un étudiant on obtien ses notes.
 */
class Note
{
	private:
		/**
		 *\brief Pointeur d'étudiant :
		 * Ce pointeur permet de rattacher l'adresse de l'étudiant qui a obtenue cette note exemple &Jean->12/20 
		 */
		Student * pStudent;
		/**
		 *\brief Note saisie par l'utilisateur
		 */
		int note;		
	public:
		/**
		 *\brief Méthode qui permet d'obtenir une note.
		 * exemple: objetNote.getNote()->"12".
		 *\return Une note.
		 */
		int getNote();
		/**
		 *\brief Méthode qui permet de modifier une note.
		 * exemple: objetNote.setNote("16")
		 */
		void setNote(int thisNote);
		/**
		 *\brief Constructeur de la classe Note qui à en parametre des adresses d'étudiants pour les rattacher à leurs notes.
		 */
		Note(Student* pStudent);
		/**
		 *\brief Méthode qui permet d'ajouter une note.
		 */
		void input();
		/**
		 *\brief Méthode qui permet d'afficher une note.
		 */
		void display();
};
