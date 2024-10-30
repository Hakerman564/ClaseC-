#include <iostream>

using namespace std;
//autor negel diaz marine 2020-0512
/*
Hacer un programa que lea por teclado un año y calcule y muestre
si es bisiesto. Se debe hacer una función llamada Bisiesto. ();
*/

bool biciesto(int anual);

int main()
	{
		cout << "Calculador de A\xa4o biciesto" << endl;
		int anual;
		cout << "Introdusca un a\xa4o" << endl;
		cin >> anual;
		if(biciesto(anual))
		{
			cout << "El a\xa4o es biciesto" << endl;
		}
		else{cout << "el a\xa4o no es biciesto" << endl;}
		system("pause");
		return 0;
	}
	
	
bool biciesto(int anual)
{
	bool respuesta;
	if(anual%4 == 0)
	{
		respuesta = true;
	}
	else
	{
		respuesta = false;
	}
	return respuesta;
}
