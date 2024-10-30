#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Crear un programa que pida un número del 1 al 10 y diga si es primo
*/
void dectorprimo(int x)
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
		cout << "Es primo" << endl;
	}
	else
	{
		cout << "no es primo" << endl;
	}
}

int main()
{
	cout << "Este es un dectetor de numeros primos" << endl;
	int u=0;
	while(u<1||u>10)
	{
		cout << "escriba un numero de 1 a 10" << endl;
		cin >> u;	
	}
	dectorprimo(u);
	system("pause");
	return 0;	
}

