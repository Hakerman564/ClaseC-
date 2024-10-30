#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
//Crear un programa que pida un número y diga si es positivo o negativo.

bool com(int x)
	{
		if(x<0)
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
		cout << "Verificador de signo" << endl;
		cout << "Escribe un numero" << endl;
		cin >> numero;
		z = com(numero);
		if(z)
		{
			cout << "El numero es positivo" << endl;
		}
		else
		{
			cout << "el numero es negativo" << endl;
		}
		system("pause");
		return 0;
	}
