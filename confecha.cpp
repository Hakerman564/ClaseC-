#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Escribir un programa que acepte fechas escritas de modo usual y las visualice como tres
números. Por ejemplo, la entrada. 15, Agosto .1979.
Producirá la salida
15 8 1979
*/
int main()
	{
		cout << "convertidor de fecha" << endl;
		string fecha,dias,mes,a;
		int v,mez;
		cout << "introduce la fecha completamente" << endl;
		cout << "nota al comenzar escribe los dias de un solo digito con 0 y ponga un punto a al comienzo de la escritura del a\xa4o ejemplo: 04, abril .1990" << endl;
		getline(cin,fecha,'\n'); 
		v = fecha.find(".");
		dias = fecha.substr(0,2);
		mes = fecha.substr(4,v-5);
		a = fecha.substr(v+1,4);
		// mesificador
		if(strcasecmp("enero", mes.c_str()) == 0)
			{
			 mez = 1;	
			}
			else if(strcasecmp("febrero", mes.c_str()) == 0)
			{
			 mez = 2;	
			}
			else if(strcasecmp("marzo", mes.c_str()) == 0)
			{
			 mez = 3;	
			}
			else if(strcasecmp("abril", mes.c_str()) == 0)
			{
			 mez = 4;	
			}
			else if(strcasecmp("mayo", mes.c_str()) == 0)
			{
			 mez = 5;	
			}
			else if(strcasecmp("junio", mes.c_str()) == 0)
			{
			 mez = 6;	
			}
			else if(strcasecmp("julio", mes.c_str()) == 0)
			{
			 mez = 7;	
			}
			else if(strcasecmp("agosto", mes.c_str()) == 0)
			{
			 mez = 8;	
			}
			else if(strcasecmp("septiembre", mes.c_str()) == 0)
			{
			 mez = 9;	
			}
			else if(strcasecmp("octubre", mes.c_str()) == 0)
			{
			 mez = 10;	
			}
			else if(strcasecmp("noviembre", mes.c_str()) == 0)
			{
			 mez = 11;	
			}
			else if(strcasecmp("diciembre", mes.c_str()) == 0)
			{
			 mez = 12;	
			}
		cout << "fecha: " << dias << " " << mez << " " << a << endl;
		system("pause");
		return 0;
	}
