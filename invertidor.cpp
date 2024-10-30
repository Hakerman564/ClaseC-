#include <iostream>
#include <cstring>
using namespace std;




	
int main()
{
	cout << "Rebertidor" <<endl;
	cout << "introduce un texto" <<endl;
	string pom;
	int cantidad;
	getline(cin, pom);
	cantidad = pom.length();
	char pon[pom.size()+1];
	strcpy(pon, pom.c_str());
	
	cout << pon << endl;
	cout << pom << endl;
	cout << cantidad << endl;
	
	for(int i = cantidad; i>-1; i--)
	{
		cout << pon[i];
	}
	cout << endl;
	
	system("pause");
	return 0;	
}
