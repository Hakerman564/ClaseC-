#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
crear un programa que le pida al usuario un dato entero y lo imprima a pantalla ,  
luego cree una funcion que incremente el dato en 5 unidades y lo imprima a pantalla
*/
void incrementador(int* x);
int main()
	{
		cout << "incremento" << endl;
		int dato; // declaramos un dato entero
		cout << "introdusca un numero" << endl;
		cin >> dato; // se le pide al usuario que introdusca un valor
		cout << "Valor " << dato << endl;
		incrementador(&dato); // la funcion incrementador toma la direccion de memoria de datos
		cout << "valor incrementado " << dato << endl; // se imprime el dato cambiado
		system("pause");
		return 0;
	}
	
void incrementador(int* x) // en el parametro le decimos a la funcion que el parametro sera un puntero
{
  *x = *x + 5;	// editamos el valor de datos desde memoria
}
