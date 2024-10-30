#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Cree un programa que le pida un caracter tipo char en minuscula y lo imprima a pantalla luego cree una 
funcion que cambie el caracter de minuscula a mayuscula despues imprima a pantalla
*/
void cl(char * x);
int main()
	{
		cout << "Cambio Mayus a Minus" << endl;
		char letra;
		cout << "introdusca una letra " << endl;
		cin >> letra;
		cout << "Valor " << letra << endl;
		cl(&letra);
		cout << "letra cambiada " << letra << endl;
		system("pause");
		return 0;
		
		system("pause");
		return 0;
	}
	
void cl(char * x)
{
	*x = *x - 32;	
}
