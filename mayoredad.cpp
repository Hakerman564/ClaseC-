#include <iostream>
using namespace std;
//autor: negel eduardo diaz marine 2020-0512

int main() // programa que procesa la edad
{
	// inicio
	//declaracion de variables
	int edad,falta;
	cout << " Cual es tu edad --> ";
	//introduccion de datos
	cin >> edad;
	// procesos
	falta = 18 - edad;
	//salida
	if (edad > 17)
	{
		cout << "eres mayor de edad esta autorizado para entrar " << endl;	
	}
	else
	{
		cout << " eres menor de edad  te faltan " << falta << " años para entrar intentelo cuando tengas 18" << endl;
	}
	system("pause");
	return 0;
}
