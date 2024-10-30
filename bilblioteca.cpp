#include <iostream>
#include <cstdlib>
#include<string>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Crear un arreglo dinámico con new y delete que pida al usuario cuantos libros se introducirán a una biblioteca, 
este pedirá con ´´for´´ datos como el nombre del libro y el autor luego mostrará en pantalla los nuevos libros ingresados.
 ´´Si es posible agregar la función stoi para transformar la entrada de tipo string a tipo entero´´.
*/
int main()
	{
		cout << "Bilblioteca" << endl;
		int t;
		cout << "Cuantos Libros nuevos introduciras: " << endl;
		cin >> t;
		string* p = new string[t]; // se reserva en el heap memoria para el array	y se da la direccion de memoria del primer elemento
		string* x = new string[t];
		
		// introduccion 
		for(int i = 0; i < t ; i++)
			{
			cout << "Autor: "  << i+1 << ": ";	
			getline(cin,p[i],'\n');
			if(*(p+i) == "" )
				{
					getline(cin,p[i],'\n');		
				}
			}
		
		for(int i = 0; i < t ; i++)
			{
			cout << "Nombre: "  << i+1 << ": ";	
			getline(cin,x[i],'\n');
			}
		
			
		
		// Impresion 
		for(int i = 0; i < t ; i++)
			{
			cout << "Libro "  << i+1 << " --> Autor: "  << *(p+i) << " Nombre: " << *(x+i) << endl;
			}
			
		// liberacion de memoria
		delete[] p;
		delete[] x;
		system("pause");
		return 0;
	}
