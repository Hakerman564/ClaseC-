#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Escribir un programa que acepte un número de tres dígitos escrito en palabra y a
continuación los visualice como un valor de tipo entero. La entrada se termina con un
punto. 
Por ejemplo, 
la entrada.   	doscientos veinticinco
				Producirá la salida
						225
*/
	
int main()
	{
		cout << "convertidor numerico (letra numero)" << endl;
		string name,c,d,u;
		int espacio1,espacio2, numero;
		cout << "introdusca un numero en letra ejemplo: cuatrocientos veinte y dos " << endl;
		cout << "nota: siempre debes escribir con espacios cada unidad ademas de que la divisioen entre la " 
		<< "decima y la unidad deve existir una (y) entre medio de esta. tambien deven colocarse en minuscula" << endl;
		cout << "Escriba: ";
		getline(cin,name,'\n'); 
		espacio1 = name.find(" ");
		espacio2 = name.find("y");
		c = name.substr(0,espacio1);
		d = name.substr(espacio1+1,espacio2-espacio1-2);
		u = name.substr(espacio2+2,5);
			//centenas
		if(strcasecmp("cien", c.c_str()) == 0)
			{
			numero = numero + 100;	
			}
		else if(strcasecmp("doscientos",c.c_str()) == 0)
			{
			numero = numero + 200;	
			}
		else if(strcasecmp("trescientos",c.c_str()) == 0)
			{
			numero = numero + 300;	
			}
		else if(strcasecmp("cuatrocientos",c.c_str()) == 0)
			{
			numero = numero + 400;	
			}
		else if(strcasecmp("quinientos",c.c_str()) == 0)
			{
			numero = numero + 500;	
			}
		else if(strcasecmp("seiscientos",c.c_str()) == 0)
			{
			numero = numero + 600;	
			}
		else if(strcasecmp("setecientos",c.c_str()) == 0)
			{
			numero = numero + 700;	
			}
		else if(strcasecmp("ochocientos",c.c_str()) == 0)
			{
			numero = numero + 800;	
			}
		else if(strcasecmp("novecientos",c.c_str()) == 0)
			{
			numero = numero + 900;	
			}
		//decenas
		if(strcasecmp("diez", d.c_str()) == 0)
			{
			numero = numero + 10;	
			}
		else if(strcasecmp("veinte",d.c_str()) == 0)
			{
			numero = numero + 20;	
			}
		else if(strcasecmp("treinta",d.c_str()) == 0)
			{
			numero = numero + 30;	
			}
		else if(strcasecmp("cuarenta",d.c_str()) == 0)
			{
			numero = numero + 40;	
			}
		else if(strcasecmp("cincuenta",d.c_str()) == 0)
			{
			numero = numero + 50;	
			}
		else if(strcasecmp("sesenta",d.c_str()) == 0)
			{
			numero = numero + 60;	
			}
		else if(strcasecmp("setenta",d.c_str()) == 0)
			{
			numero = numero + 70;	
			}
		else if(strcasecmp("ochenta",d.c_str()) == 0)
			{
			numero = numero + 80;	
			}
		else if(strcasecmp("noventa",d.c_str()) == 0)
			{
			numero = numero + 90;	
			}
			
			//unidades
		if(strcasecmp("uno", u.c_str()) == 0)
			{
			numero = numero + 1;	
			}
		else if(strcasecmp("dos",u.c_str()) == 0)
			{
			numero = numero + 2;	
			}
		else if(strcasecmp("tres",u.c_str()) == 0)
			{
			numero = numero + 3;	
			}
		else if(strcasecmp("cuatro",u.c_str()) == 0)
			{
			numero = numero + 4;	
			}
		else if(strcasecmp("cinco",u.c_str()) == 0)
			{
			numero = numero + 5;	
			}
		else if(strcasecmp("seis",u.c_str()) == 0)
			{
			numero = numero + 6;	
			}
		else if(strcasecmp("siete",u.c_str()) == 0)
			{
			numero = numero + 7;	
			}
		else if(strcasecmp("ocho",u.c_str()) == 0)
			{
			numero = numero + 8;	
			}
		else if(strcasecmp("nueve",u.c_str()) == 0)
			{
			numero = numero + 9;	
			}
			
		cout << numero << endl;
		
		system("pause");
		return 0;
	}
