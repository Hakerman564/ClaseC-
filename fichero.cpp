#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fichero("numeros.txt");
	
	for(int x = 0; x <= 1000; x++) 
	{
	 fichero << x << endl;	
	}

	fichero.close();
	cout << "" << endl;
	system("pause");
}
