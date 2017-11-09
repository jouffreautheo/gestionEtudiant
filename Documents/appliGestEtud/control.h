using namespace std;
/**
 *\file control.h
 *\autor Theo Jouffreau
 *\version 0.1
 *\date 12 octobre 2017
 */
#include <iostream>
#include "subject.h"
#include "note.h"
#include <vector>
/**
 *\class Control
 *\brief Classe concernant les évaluations.
 *La classe Control a pour but de créer des évaluations lié au Note et au élèves(Student) par matières (Subject).
 */
class Control
{
	private:
		/**
		 *\brief Nom du control
		 */
		string name;
		/**
		 *\brief pointeur de matière pour affecter une matière à une évaluation.
		 */
		Subject * pSubject;
		/**
		 *\brief vecteur de note
		 * Ce vecteur va permettre de rentrer toutes les notes des élèves correspondant à cette evaluation.
		 */
		vector <Note> vectNote;
	public:
		/**
		 *\brief Méthode pour obtenir le nom du controle
		 * exemple: objetControl.getName() ->"Info n°1"
		 *\return Le nom du controle
		 */
		string getName();
		/**
		 *\brief Méthode pour modifier le nom du controle
		 * exemple: objetControl.setName("Maths n°1") 
		 */
		void setName(string thisName);
		/**
		 *\brief
		 */
		void input();
		/**
		 *\brief
		 */
		void display();
		/**
		 *\brief
		 */
		void setSubject(Subject* thisSubject);
		/**
		 *\brief
		 */
		void addNote(Note thisNote);
		/**
		 *\brief
		 */
		void displayNote(int eleve);
		/**
		 *\brief
		 */
		vector<Note> *getVecNote() ;
		/**
		 *\brief
		 */
		Subject* getSubject();
};
