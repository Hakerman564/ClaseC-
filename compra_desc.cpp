#include <iostream>
using namespace std;
//negel eduardo diaz marine 2020-0512 autor

int main()// programa que calcula descuento
{
	//declarar las variable
	string name; 
	float descuento, total, tdescuento, price;
	// introduccion de datos
	cout << "calculadora de descuento" << endl;
	cout << "nombre del articulo" << endl;
	cin >> name;
	cout << "precio del articulo" << endl;
	cin >> price ;
	cout << "% de descuento ejemplo(1-100)" << endl;
	cin >> descuento;
	//procesos
	descuento = descuento/100;
	tdescuento = price * descuento;
	total = price - tdescuento;
	// salida
	cout << "--------------" << endl;
	cout << "| articulo: " << name << endl;
	cout << "| precio: " << price << endl;
	cout << "| descuento: " << tdescuento << endl;
	cout << "| real a pagar: " << total << endl;
	system("pause");
	return 0;
}
