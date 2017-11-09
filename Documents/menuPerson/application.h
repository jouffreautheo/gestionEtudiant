using namespace std;
#include <iostream>
#include "person.h"
#include <vector>
class Application
{
	private:
			vector <Person> vectPerson;
			void displayMenu();
			char controlChoice();
			void doChoice(char theChoice);
			void addPerson();
			void displayPerson();
			Person searchPerson(string theSearch);
	public:
			void run();
};
