#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Realizar un programa que lea dos números: Realizar una función
que realice la operación de validar el mayor y el menor e imprima que números
es mayor y cual es menor, la función tendrá parámetros, donde se introducirán
los números.
*/

int alto(int x, int y);
int bajo(int x, int y);
int main()
	{
		cout << "Mayor de ambos numeros" << endl;
		int x,y,w,z;
		cout << "Introducion de numeros" << endl;
		cout << "A: " ;
		cin >> x;
		cout << endl;
		cout << "B: ";
		cin >> y;
		w = alto(x,y);
		z = bajo(x,y);
		cout << "Valor mas alto: " << w << endl;
		cout << "Valor mas bajo: " << z << endl;
		system("pause");
		return 0;
	}
	
	
	int alto(int x, int y)
	{
		int base;
		if(x > y)
		{
			base = x;
		}	
		else
		{
			base =  y;	
		}
	}
	int bajo(int x, int y)
	{
		int base;
		if(x < y)
		{
			base = x;
		}	
		else
		{
			base =  y;	
		}		
	}
