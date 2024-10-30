#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Se quiere calcular la edad de un individuo, para ello se va a tener como entrada dos fechas
en el formato día (1 a 31), mes (1 a 12) y año (entero de cuatro dígitos), correspondientes
a la fecha de nacimiento y la fecha actual, respectivamente.

? Escribir un programa que calcule y visualice la edad del individuo. Si es la fecha
de un bebe (menos de un año de edad), la edad se debe dar en meses y días; en
caso contrario, la edad se calculará en años.
*/

struct fecha{
	int dia;
	int mes;
	int anual;
};

int main()
	{
		cout << "Calculadora de edad" << endl;
		struct fecha nacimiento;
		struct fecha actual;
		int a,b,c;
		//alpa

		//introduccion
		cout << "A continuacion inserte su fecha de nacimiento" << endl;
		while(nacimiento.dia <= 0 || nacimiento.dia > 31)
		{
		cout << "dia: ";
		cin >> nacimiento.dia;
		cout << endl;
		}
		while(nacimiento.mes <= 0 || nacimiento.mes > 12)
		{
		cout << "mes: ";
		cin >> nacimiento.mes;
		cout << endl;
		}
		while(nacimiento.anual < 999 || nacimiento.anual > 9999)
		{
		cout << "a\xa4o: ";
		cin >> nacimiento.anual;
		cout << endl;
		}
		cout << "A continuacion inserte la fecha actual" << endl;
		actual.dia = 0;
		while(actual.dia <= 0 || actual.dia > 31)
		{
		cout << "dia: ";
		cin >> actual.dia;
		cout << endl;
		}
		while(actual.mes <= 0 || actual.mes > 12)
		{
		cout << "mes: ";
		cin >> actual.mes;
		cout << endl;
		}
		while(actual.anual < 999 || actual.anual > 9999)
		{
		cout << "a\xa4o: ";
		cin >> actual.anual;
		cout << endl;
		}
		
		// proceso
		a = actual.dia - nacimiento.dia;
		b = actual.mes - nacimiento.mes;
		c = actual.anual - nacimiento.anual;
		
		if(a < 0)
		{
			b = b-1;
			a  = a + 31;	
		}
		
			if(b < 0)
		{
			c = c-1;
			b = b + 12;	
		}
		
		// salida
		
		cout << "" << endl;
		if(c == 0)
		{
			cout << "Usted tiene : " << b << "meses " << endl;	
			cout << "Usted tiene : " << a << "dias " << endl;	
		}
		else
		{
			cout << "Usted tiene : " << c << " a\xa4os" << endl;	
		}
		system("pause");
		return 0;
	}
