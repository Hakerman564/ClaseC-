#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Hacer  un  programa  para  
calcular  el  número  de días  que  hay  entre  dos  fechas;  declarar  fecha como una estructura.
*/
struct fecha{
	int dia;
	int mes;
	int anual;
};

int main()
	{
		int pon;
		bool can[] = {0,0,0,0,0,0,0,0,0,0,0,0};
		int mes[] = {31,28,31,30,31,30,31,31,30,31,30,31};
		cout << "Calculadora de edad" << endl;
		struct fecha nacimiento;
		struct fecha actual;
		int a,b,c;
		//alpa

		//introduccion
		cout << "A continuacion la inserte fecha 1" << endl;
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
		cout << "A continuacion inserte la fecha 2" << endl;
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
			
			if(b < 0)
		{
			c = c-1;
			b = b + 12;	
		}
		
		if(a < 0)
		{
			b = b-1;
			a  = a + 31;	
		}
		
		if(actual.mes > nacimiento.mes)
		{
			for(int i = nacimiento.mes; i < actual.mes; i++)	
			{
			 can[i] = true;	
			}	
		}
		else
		{
			for(int i = actual.mes; i < nacimiento.mes; i++)	
			{
			 can[i] = true;	
			}
			
			for(int i = 0; i < 12; i++)	
			{
			 if(can[i] == true)
			 {
			 	can[i] = false;
			 }
			 else
			 {
			 	can[i] = true;
			 }
			}		
		}
		for(int i = 0; i < 12; i++)
		{
			if(can[i] == true)
			{
			a = a + mes[i];	
			}
		}
		
		for(int i = nacimiento.anual; i < actual.anual;i++)
		{
			if(i%4==0)
			{
				pon++;
			}
		}
		
		if(pon == 0)
		{
			a = a + c*365;
		}
		else
		{
		 	a = a + 365*(c-pon);
			a = a + 366*pon;	
		}
		
		
		// salida
		
		
			cout << "Usted tiene : " << a << "dias " << endl;	
	
		system("pause");
		return 0;
	}
