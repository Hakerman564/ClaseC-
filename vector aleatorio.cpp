#include <iostream>
#include <cstdlib>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Realizar un programa que defina un vector llamado “vector_numeros” de 10 enteros, a
continuación lo inicialice con valores aleatorios (del 1 al 10) y posteriormente muestre en
pantalla cada elemento del vector junto con su cuadrado y su cubo.
*/
int main()
	{
		cout << "Vector" << endl;
		int vector[10];
		for(int i = 0; i < 10; i++)
		{
			vector[i] = 1 + (rand() % 10);
		}
		cout << "elementos del vecto" << endl;
		for(int i = 0; i < 10; i++)
		{
			cout << "Numero" << i+1 << endl;
			cout  << "valor: " << vector[i] << endl;
			cout  << "cuadrado: " << vector[i]*vector[i] << endl;
			cout  << "cubo : " << vector[i]*vector[i]*vector[i] << endl;
		}
		
		
		system("pause");
		return 0;
	}
