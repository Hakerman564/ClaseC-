#include <iostream>
using namespace std;

	long double fatorial (long double n)
	{
		long double contenedor = 1;
		
		for(int i = 0;i<n;i++)
		{
			contenedor = contenedor	* (i+1);
		}
		return contenedor;	
		
	}

	
	int main()
	{
		cout << "Programa que Calcular el fatorial de un numero" << endl;
		 long double fator,resultado;
		cout << "Introdusca un numero" << endl;
		cin >> fator;
		resultado = fatorial(fator);
		cout << "El fatorial de " << fator << " es: " << resultado <<  endl;
		system("pause");
		return 0;
	}
