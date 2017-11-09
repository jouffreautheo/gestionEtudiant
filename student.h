using namespace std;
/**
 *\file student.h
 *\autor Theo Jouffreau
 *\version 0.1
 *\date 12 octobre 2017
 */
#include <iostream>
#include <vector>
#include "bulletin.h"
/**
 *\class Student
 *\brief Classe concernant les élèves.
 * La classe Student permet la gestion des élèves , c'est aussi en pacerelle entre les Bulletin , les Note et les Section.
 */
class Student
{
	private:
		/**
		 *\brief nom d'un élève
		 */
		string name;
		/**
		 *\brief prenom d'un élève
		 */
		string surname;
		/**
		 *\brief âge d'un élève
		 */
		int age;
		/**
		 *\brief vecteur  de bulletin
		 * Ce vecteur va permettre le transfert des appréciations du bulletin à l'élève.
		 */
		vector<Bulletin> vectBulletin;
	public:
		/**
		 *\brief Méthode pour obtenir le nom d'un élève
		 * exemple: objetEleve.getName() -> "Jean"
		 *\return Le nom d'un élève
		 */
		string getName();
		/**
		 *\brief Méthode pour modifier le nom d'un élève
		 * exemple: objetEleve.setName("Dujardin")
		 */
		void setName(string thisName);
		/**
		 *\brief Méthode pour obtenir le prénom d'un élève
		 * exemple: objetEleve.getSurname() ->"Albert"
		 *\return Le prenom d'un élève
		 */
		string getSurname();
		/**
		 *\brief Méthode pour modifier le prénom d'un élève
		 * exemple: objetEleve.setSurname("Camus")
		 */
		void setSurname(string thisSurname);
		/**
		 *\brief Méthode pour obtenir l'âge d'un élève
		 * exemple: objetEleve.getAge() -> "45"
		 *\return L'âge d'un élève
		 */	
		int getAge();
		/**
		 *\brief Méthode pour modifier l'âge d'un élève
		 * exemple: objetEleve.setAge("56")
		 */
		void setAge(int thisAge);
		/**
		 *\brief Méthode pour rentrer les détails d'un élève
		 */
		void input();
		/**
		 *\brief Méthode pour afficher les détails d'un élève
		 */
		void display();
		/**
		 *\brief Méthode pour afficher uniquement le nom et prénom d'un élève
		 */
		void displayNP();
		/**
		 *\brief Méthode pour associer un bulletin à l'élève
		 */
		void addBulletin(Bulletin thisBulletin);
		/**
		 *\brief Méthode pour obtenir le bulletin d'un élève
		 *\return Les appréciations d'un élève
		 */
		vector<Bulletin>* getBulletin();
};
