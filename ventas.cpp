#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Realizar un programa que ingrese un arreglo BIDIMENCIONAL las ventas mensuales de (x) Vendedores 
durante 5 meses. 
Se le pide que por favor calcule e imprima;  EL TOTAL DE LA VENTAS POR VENDEDOR*
*/
int main()
	{
		
		cout << "Ventas" << endl;
		int x,base;
		cout << " cuantos vendedores hay " << endl;
		cin >> x;
		// introduccion
		int venta[x][5]; //x = cantidad , y 5 igual a meses
		
		for(int i = 0; i < x ; i++)	
		{
			cout << "Vendedor Numero "  << i+1 << endl;
			for(int e = 0; e < 5 ; e++)	
			{
				cout << "mes: " << e+1 << endl;
				cout << "precio: ";
				cin >>  venta[i][e];
				cout << endl;
			}	
		}
		
		// calculo y impresion
		for(int i = 0; i < x ; i++)	
		{
			cout << "Vendedor Numero "  << i+1 << endl;
			for(int e = 0; e < 5 ; e++)	
			{
				base += venta[i][e];	
			}	
			cout << "------------" << endl;
			cout << "Ventas totales: " << base << endl;
			base = 0;
		}	
		
		system("pause");
		return 0;
	}
