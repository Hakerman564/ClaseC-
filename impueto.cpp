#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Crear una aplicación que lea un importe bruto y calcule su importe neto, si es mayor de
25,000 se le aplicará un 16% de impuestos, en caso contrario se le aplicará un 10%.

*/
int main()
	{
		cout << "calculo de importe bruto" << endl;
		cout << "escriba el importe bruto" << endl;
		float importe,neto,impuesto;
		
		cin >> importe;
		if(importe > 25000)
		{
			impuesto = importe *0.16;
			neto = importe - impuesto;
		}
		else
		{
			impuesto = importe *0.10;
			neto = importe - impuesto;	
		}
		
		cout << "el impuesto es de = " << impuesto << endl;
		cout << "importe neto es = " << neto << endl;
		system("pause");
		return 0;
	}
