#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Crear un programa que lea los precios de 5 artículos y las cantidades vendidas por una
empresa en sus 4 sucursales. Informar:
? Las cantidades totales de cada artículo.
? La cantidad de artículos en la sucursal 2.
? La cantidad del artículo 3 en la sucursal 1.
? La recaudación total de cada sucursal.
? La recaudación total de la empresa.
? La sucursal de mayor recaudación.
*/
int main()
	{
		cout << "la verdulera" << endl;
		int ventas[4][5][2]; // 4 hace referencia a la sucursal el 5 a los articulos y el 2 al precio y cantidad
		int base = 0;
		int c;
		int art[5];
		//precios 
		//socursal 1.
		ventas[0][0][0] = 50;
		ventas[0][1][0] = 80;
		ventas[0][2][0] = 20;
		ventas[0][3][0] = 13;
		ventas[0][4][0] = 58;
		
			//socursal 2.
		ventas[1][0][0] = 50;
		ventas[1][1][0] = 80;
		ventas[1][2][0] = 20;
		ventas[1][3][0] = 13;
		ventas[1][4][0] = 58;
		
			//socursal 3.
		ventas[2][0][0] = 50;
		ventas[2][1][0] = 80;
		ventas[2][2][0] = 20;
		ventas[2][3][0] = 13;
		ventas[2][4][0] = 58;
		
			//socursal 4.
		ventas[3][0][0] = 50;
		ventas[3][1][0] = 80;
		ventas[3][2][0] = 20;
		ventas[3][3][0] = 13;
		ventas[3][4][0] = 58;
		

		
		// cantidad
			//socursal 1.
		ventas[0][0][1] = 20;
		ventas[0][1][1] = 10;
		ventas[0][2][1] = 15;
		ventas[0][3][1] = 2;
		ventas[0][4][1] = 1;
		
			//socursal 2.
		ventas[1][0][1] = 100;
		ventas[1][1][1] = 150;
		ventas[1][2][1] = 300;
		ventas[1][3][1] = 12;
		ventas[1][4][1] = 74;
		
			//socursal 3.
		ventas[2][0][1] = 85;
		ventas[2][1][1] = 72;
		ventas[2][2][1] = 200;
		ventas[2][3][1] = 350;
		ventas[2][4][1] = 20;
		
			//socursal 4.
		ventas[3][0][1] = 78;
		ventas[3][1][1] = 9;
		ventas[3][2][1] = 18;
		ventas[3][3][1] = 13;
		ventas[3][4][1] = 14;
		

		//cantidad total
		cout << "cantidad total articulo" << endl;
		for(int i =0; i < 5; i++)
		{
			art[i] = ventas[0][i][1] + ventas[1][i][1] + ventas[2][i][1] + ventas[3][i][1];
			cout << " articulo " << i+1 << ": " << art[i];
			cout << endl;
		}
		
		base = 0;
		for(int i =0; i < 5; i++)
		{
			base = base + ventas[1][i][1];
		}
		cout << "Cantidad de articulos en la sucursal 2: " << base << endl;
		
		cout << "Cantidad del tercer articulo en la sucursal 1: " << ventas[0][2][1] << endl;
		
		cout << "Ventas totales de cada sucursal: " << ventas[0][2][1] << endl;
		base = 0;
		for(int i =0; i < 4; i++)
		{
			art[i] = (ventas[i][0][1] * ventas[i][0][0]) + (ventas[i][1][1] * ventas[i][1][0]) +
			(ventas[i][2][1] * ventas[i][2][0]) + (ventas[i][3][1] * ventas[i][3][0]) + 
			(ventas[i][4][1] * ventas[i][4][0]);
			base = base + art[i]; 
			cout << " sucursal " << i+1 << ": " << art[i];
			cout << endl;
		}
		
	
			cout << " Recaudacion total de la empresa : " << base << endl;
				base = 0;
				c=0;
			for(int i =0; i < 4; i++)
			{
				
			  if(c < art[i])
			  {
			  	base = i+1;
			  	c = art[i];
				  }	
			}
			cout << "la sucursal que mas vendio fue: "  << base << endl;
		system("pause");
		return 0;
	}
