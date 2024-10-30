#include <iostream>
#include <cstdlib>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Crear un programa de arreglo dinámico que utilice new y delete que pida al usuario cuantas calificaciones se introducirán, 
se ingrese el numero de notas pedidas y que las imprima en pantalla.
*/
int main()
	{
		int t;
		cout << "Calificaciones" << endl;
		cout << "Cuantas calificaciones vas a Registrar: " << endl;
		cin >> t;
		int* p = new int[t]; // se reserva en el heap memoria para el array	y se da la direccion de memoria del primer elemento

		// introduccion de notas
		for(int i = 0; i < t ; i++)
			{
			cout << "Calificacion "  << i+1 << ": " << endl;
			cin >> p[i];	
			}
			
		// Impresion de notas
		for(int i = 0; i < t ; i++)
			{
			cout << "Calificacion "  << i+1 << ": " << *(p+i) << endl;
			}
			
		// liberacion de memoria
		delete[] p;
		system("pause");
		return 0;
	}
