#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
// Crear un programa que pida un número y diga si es mayor de 100.
bool com(int x)
	{
		if(x<100)
		{
		return false;	
		}
		else
		{
		return true;
		}
		
	}
int main()
	{
		bool z;
		int numero;
		cout << "Sera mas grande que 100???" << endl;
		cout << "Escribe un numero" << endl;
		cin >> numero;
		z = com(numero);
		if(z)
		{
			cout << "Es mayor a 100" << endl;
		}
		else
		{
			cout << "es menor a 100" << endl;
		}
		system("pause");
		return 0;
	}
