#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Escribir un programa, mediante funciones, que capture por pantalla
el mes y el año, y visualice un calendario
*/

void calendario(int anual ,int mes);
string nmes(int mes);
int candia(int mes, int anual);
int zeller(int anual, int mes);

int main()
	{
		cout << "Calendario" << endl;
		int mes;
		int anual;
		cout << "A\xa4o" << endl;
		cin >> anual;
		cout << "Mes" << endl;
		cin >> mes;
		calendario(anual,mes);
		system("pause");
		return 0;
	}
	
	void calendario(int anual ,int mes)
	{
	 	cout << "A\xa4o: " << anual << endl;
		cout <<	nmes(mes) << endl ;	
		cout << "Dom Lun Mar Mie Jue Vie Sab\n";
		int z = zeller(anual, mes);
		for(int i = 0 ; i < z; i++)
		{
			cout << "    ";
		}
		for(int dia = 1; dia <= candia(mes, anual);dia++)
		{
			printf("%3d ",dia);
			z++;
			if(z % 7 == 0)
			{
				cout <<"\n";
			}
		}
		cout << endl;
	}
	
	
	string nmes(int mes)
	{
		switch(mes)
		{
		case 1: return "Enero";
		case 2: return "Febrero";
		case 3: return "Marzo";
		case 4: return "Abril";
		case 5: return "Mayo";
		case 6: return "Junio";
		case 7: return "Julio";
		case 8: return "Agosto";
		case 9: return "Septiembre";
		case 10: return "Octubre";
		case 11: return "Noviembre";
		case 12: return "Diciembre";
		}
	}
	
	int candia(int mes, int anual)
	{
		int base;
		if(mes == 1|| mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
		{
			base = 31;	
		}	
		if(mes == 2)
		{
			base = 28;
		}
		if(anual % 4  == 0 && mes == 2)
		{
			base = 29;
		}
		if(mes == 4|| mes == 6 || mes == 9 || mes == 11 )
		{
			base = 30;
		}
			return base;
		
	}
	// devuelve
	// 0 domingo, 1 lunes , 2 marte , 3 miercoles, 4 jueves , 5 viernes, 6 sabado;
	int zeller(int anual, int mes) {
		int a = (14 - mes) / 12;
		int y = anual - a;
		int m = mes + 12 * a - 2;
		int dia = 1, d;
		d = (dia + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
		return d;
	}
	
