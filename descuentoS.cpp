#include <iostream>
using namespace std;
//autor Negel diaz marine 2020-0512

int main() //Descuentos
{
	//Var
	string nombre,producto;
	float monto,desc,montotal,desm;

	//Introduccion
	cout << "Vamos a calcular el descuento de su producto" << endl;
	cout << "Nombre-->";
	cin >> nombre ;
	cout << "Nombre del producto-->";
	cin >> producto;
	cout << "Precio del producto-->";
	cin >> monto;
	
	//proceso
	if (monto <= 5000)
	{
		desc = 0.05	;
	}
	else if (monto >= 5001 && monto <= 10000)
	{
		desc = 0.1;
	}
	else if (monto >= 10001 && monto <= 20000)
	{
		desc = 0.15;
	}
	else if (monto >= 20001)
	{
		desc = 0.2;
	}
	desm =  monto* desc;
	montotal = monto - desm;
	
	//salida
	cout <<  " " << nombre << endl;
	cout << "Precio original --> (" << monto << "RD$)" << endl;
	cout << "Descuento --> (" << desm << "RD$)" << endl;
	cout << "Total a pagar (" << montotal << "RD$)" << endl;
	
	cout << "" << endl;
	system("pause");
	return 0;
}
