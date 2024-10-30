#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Hacer un programa donde se ingrese la fecha actual y se comprube 
si corresponde al día de tu cumpleaños. 
Mostrar un mensaje de felicitaciones en tal caso
*/

struct happy
{
char mes[10];
int dia;
int anual;	
};


int main()
	{
		cout << "felicitaciones" << endl;
		struct happy fechac;
		struct happy fechaa;
		cout << "a continuacion introdusca su fecha de nacimiento" << endl;
		cout << "a\xa4o" << endl;
		cin >> fechac.anual;
		cout << "mes" << endl;
		cin >> fechac.mes;
		cout << "dia" << endl;
		cin >> fechac.dia;
		
		cout << "a continuacion introdusca la fecha actual" << endl;
		cout << "a\xa4o" << endl;
		cin >> fechaa.anual;
		cout << "mes" << endl;
		cin >> fechaa.mes;
		cout << "dia" << endl;
		cin >> fechaa.dia;
		
		if(fechac.anual == fechaa.anual && strcasecmp(fechac.mes,fechaa.mes) == 0 && fechac.dia == fechaa.dia)
		{
			cout << "Felicitaciones" << endl;
		}
	
	
		system("pause");
		return 0;
	}
