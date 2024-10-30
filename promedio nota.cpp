#include <iostream>
#include <iomanip>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Utilizando la librería <iomanip> realizar un programa que lea por teclado las notas de 
10 alumnos de una clase, y  se le pide que calcule la nota media del 
grupo y que muestre los alumnos con notas superiores a la media.
*/
int main()
	{
		cout << "Mayor a la media" << endl;
		string name[10];
		int nota[10];
		float promedio;
		int base;
		for(int i = 0; i < 10 ; i++)	
		{
			cout << "Introdusca el nombre" << i+1 << endl;
			cin >> name[i];
			cout << "Introdusca la calificacion" << i+1 << endl;
			cin >> nota[i];	
		}	
		
		// promedio
		for(int i = 0; i < 10;i++)
		{
			base += nota[i];	
		}
		promedio = base/10;
		cout << "Promedio: " << promedio << endl;
		cout << "Estudiantes Mayor al promedio" << endl;
		for(int i = 0; i < 10 ; i++)	
		{
		 if(nota[i] > promedio)	
		 {
		 	cout << name[i] <<"[" << nota[i] << "]" << ", "; 
		 }
		}
		cout << endl;
		cout << " Estudiantes regulares" << endl;
		for(int i = 0; i < 10 ; i++)	
		{
		 if(nota[i] <= promedio)	
		 {
		 	cout << name[i] <<"[" << nota[i] << "]" << ", " ;
		 }
		}
		
		system("pause");
		return 0;
	}
