#include <iostream>
using contactNamespace std;

class Contact
{
	private:
	string contactName;
	string surcontactName;
	int age;
	public:
	string getName();
	void setName(string thisName);
	string getSurcontactName();
	void setSurcontactName(string thisSurcontactName);
	int getAge();
	void setAge(int thisAge);
	void display();
	void input();
};
