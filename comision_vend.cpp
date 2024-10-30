#include <iostream>
using namespace std;
//Autor: negel eduardo diaz marine #2020-0512

int main() //calcular la comicion de un vendedor
{
	//declaracion de datos
	string nombre;
	 long double sueldob, ventatotal,comicion,nsueldo, gc;
	//introduccion de datos
	cout << "calculadora de comision" << endl;
	cout << "Nombre de empleado" << endl;
	cin >> nombre;
	cout << "Cantidad de dinero vendido este mes" << endl;
	cin >> ventatotal;
	cout << "sueldo de " << nombre << endl;
	cin >> sueldob;
	cout << "comicion de la empresa % ejemplo 100 - 1" << endl;
	cin >> comicion;
	// procesos
	comicion = comicion / 100;
	gc = ventatotal * comicion;
	nsueldo = sueldob + gc;
	//salida
	cout << "--------------" << endl;
	cout << "| vendedor: " << nombre << endl;
	cout << "| sueldo neto: " << sueldob << endl;
	cout << "| comision ganado: " << gc << endl;
	cout << "| sueldo total del vendedor: " << nsueldo << endl;
	system("pause");
	return 0;
}
