#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
//Crear un programa que pida un número del 1 al 5 y diga si es primo o no
bool dectorprimo(int x)
{
	int i =1;
	float divi = 1;
	while((i<x)&&(divi>0))
	{
		i++;
	 	divi = x%i;
	}
	if(((x==i)&&(divi==0))||(x==1))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	cout << "Este es un dectetor de numeros primos" << endl;
	int u=0;
	int resultado;
	while(u<1||u>5)
	{
		cout << "escriba un numero de 1 a 5" << endl;
		cin >> u;	
	}
	resultado = dectorprimo(u);
	if(resultado)
	{
		cout << "Es primo" << endl;
	}
	else
	{
		cout << "no es primo" << endl;
	}
	system("pause");
	return 0;	
}

