#include <iostream>
#include <string>
using namespace std;
	
	
	int main()
	{
		char letra;
		string palabra;
		int z;
		cout << "Introdusca una palabra" << endl;
		cin >> palabra;
		cout << "Que letra esta buscando" << endl;
		cin >> letra;
		z = palabra.find(letra);
		z = z+1;
		
		if(z==0)
		{
			cout << "No Se encuentra la letra" << endl;	
		}
		else
		{
			cout << "la posicion de la letra es> " << z << endl;
		}
		
		system("pause");
		return 0;
	}
