#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

using namespace std;
//autor negel diaz marine 2020-0512
/*

*/

void borrar();
void insertal();
 
int main()
	{
		borrar();
		insertal();
		system("pause");
		return 0;
	}
	
	void borrar()
	{
		cout << "Programa de Ficheros delete" << endl;
		char nombre[20];
		
		
		ifstream salida;
		salida.open("nombre.txt",ios::in);
		
		ofstream entrada;
		entrada.open("temp.txt",ios::out);
		
		 
		if(salida.fail())
		{
			cout << "Error al Cargar archivo";
			getch();
		}
		
		else
		{
		char aux[20];
		 cout <<"Nombre a borrar: "	;
		 cin >> aux;
		 
		 salida >> nombre;
		 
		 while(!salida.eof())
		 {
		 	// secuencia del datos y otros
		 	if(strcmp(aux,nombre)==0)
		 	{
			 	cout << "Eliminado con Exito";
				getch();	
			}
			else
			{
				entrada << nombre << endl;
			}
			salida >> nombre;
		 }
		 
		 entrada.close();
		 salida.close();
		 remove("nombre.txt");
		 rename("temp.txt","nombre.txt");
		}	
	}
	
	
	void insertal()
	{
		ofstream entrada;
		entrada.open("nombre.txt",ios::app);
		
		if(entrada.fail())
		{
			cout << "Error al entrar";
			getch();
		}
		
		else
		{
			char aux[20];
			cout << "Inserte el nuevo nombre" << endl;
			cin >> aux;
			entrada << aux << endl;
		}
		
	}
	
