#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Realizar una calculadora que lea dos números por teclado
y lea el usuario, identifique que operación realizar: Se utilizara Case y se
realizaran las funciones: suma (), Restar (), Multiplicar (), Dividir ().
*/
float suma(float x, float y);
float resta(float x, float y);
float multiplicacion(float x, float y);
float dividir(float x, float y);

int main()
	{
		bool salida;
		salida = true;
		while(salida)
		{
		int s;
		float x,y;
		cout << "Calculadora" << endl;
		cout << "Primero selecione una opcion" << endl;
		cout << "1 Sumar" << endl;
		cout << "2 Restar" << endl;
		cout << "3 Multiplicar" << endl;
		cout << "4 Dividir " << endl;
		cout << "introdusca cualquier numero" << endl;
		cin >> s;
		cout << "introdusca ambos numero con espacion de separacion"  << endl;
		cin >> x >> y;
		
		system("cls");
		switch(s)
			{
			case 1:
				cout << "El resultado es: " << suma(x,y) << endl;	
				break;
			case 2:
				cout << "El resultado es: " << resta(x,y) << endl;
				break;
			case 3:
				cout << "El resultado es: " << multiplicacion(x,y) << endl;
				break;
			case 4:
				cout << "El resultado es: " << dividir(x,y) << endl;
				break;
				default:
					salida = false;
			}
			system("pause");
			system("cls");
		}
		system("pause");
		return 0;
	}
	
	float suma(float x, float y)
	{
	  return x+y;		
	}
	float resta(float x, float y)
	{
	  return x-y;
	}
	float multiplicacion(float x, float y)
	{
	  return x*y;
	}
	float dividir(float x, float y)
	{
	  return x/y;	
	}
