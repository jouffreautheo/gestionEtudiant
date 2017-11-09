#include <iostream>
using namespace std;

class Person
{
	private:
	string name;
	string surname;
	int age;
	public:
	string getName();
	void setName(string thisName);
	string getSurname();
	void setSurname(string thisSurname);
	int getAge();
	void setAge(int thisAge);
	void display();
	void input();
};
