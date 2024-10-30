#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
//Crear un programa que pida un número y diga si es par o impar
int main()
	{
		cout << "Calculado de impares" << endl;
		int numero;
		float resultado;
		
		cout << "Escribe un numero" << endl;
		cin >> numero;
		resultado = numero%2;
		
		if(resultado==0)
		{
			cout << "El numero es par" << endl;
		}
		else
		{
			cout << "El numero es impar" << endl;	
		}
		
		system("pause");
		return 0;
	}
