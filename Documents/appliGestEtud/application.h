#ifndef APPLICATION
#define APPLICATION


using namespace std;
#include "section.h"
#include <iomanip>
class Application
{
	private:
	void displayMenu();
	char controlChoice(bool choixSection);
	void doChoice(char theChoice);
	void addSection();
	void displaySection(bool avecNumero);
	void accesSection();
	void addSubject();

	public:
	void run();
	void displaySubject(bool avecNumero);
	vector<Section> vectSection;
	vector<Subject> vectSubject;
};
#endif
