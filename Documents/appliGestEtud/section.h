#ifndef SECTION
#define SECTION
#include <iostream>
#include "control.h"
#include <vector>
#include <cstdlib>
#include <iomanip>
using namespace std;
class Application;
class Section
{
	private:
	string name;
	vector<Subject*>vectPSubject;
	vector<int>vectCoeff;
	Application* app;
	vector<Student>vectStudent;
	vector<Control>vectControl;
	void displayMenu();
	char controlChoice();
	void doChoice(char theChoice);
	void addStudent();
	void displayStudent();
	void addSubject();
	void displaySubject();
	void addControl();
	void displayControl();
	void displayBulletin(); 
	void addAppreciation();     
	public:
	string getName();
	void setName(string thisName);
	void input();
	void display();
	void run();
	Section(Application* app);
};

#endif