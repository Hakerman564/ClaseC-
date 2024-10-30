#include <iostream>
using namespace std;
// autor : negel eduardo diaz marine #2020-0512
/* Crear los códigos de un programa
 que calcule e imprima la Tabla de multiplicar de los 
 números entero introducido por teclado.*/
int main()
{
	cout << "Tablas de multiplicar 1 - 12" << endl;
	cout << "Introdusca un las cantidad de numeros" << endl;
	int capacidad;
	cin >> capacidad;
	int vector[capacidad];
	for(int i = 0; i < capacidad;i++)
		{
			cout << "introdusca el numero: " << i << endl;
			cin  >> vector[i];
		}
	
	for(int e = 0; e < capacidad;e++)
		{
			cout << "Tabla de multiplicar del " << vector[e] << endl;
			cout << "------------------------ " << endl;
			for(int z = 1; z < 13;z++)
			{
				cout << vector[e] << " * " << z << "= " << vector[e]*z << endl;
				
			}
			cout << "-------------------------"  << endl;
		}
	
	system("pause");
	return 0;
}
	

