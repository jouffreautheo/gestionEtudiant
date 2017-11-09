using namespace std;
#include <vector>
#include <iostream>

int main()
{
	vector <int> vectQte;
	vectQte.push_back(6);
	vectQte.push_back(12);
	vectQte.push_back(24);

	for(int cellule=0;cellule<vectQte.size();cellule=cellule+1)
	{
		cout<<vectQte[cellule]<<endl;		 
	}
}
