#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Crear una aplicación que tome dos números del 1 al 5 y diga si ambos son primos.
*/
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
	int u = 0, m = 0;
	int resultadoa,resultadob;
	while((u<1)||(u>5))
	{
		cout << "escriba un numero de 1 a 5" << endl;
		cin >> u;	
	}
	
		while((m<1)||(m>5))
	{	
		cout << "escriba otro  numero de 1 a 5" << endl;
		cin >> m;	
	}
	resultadoa = dectorprimo(u);
	resultadob = dectorprimo(m);
	if(resultadoa)
	{
		cout << " el primer numero Es primo" << endl;
	}
	else
	{
		cout << " el primer numero no es primo" << endl;
	}
	
	
	if(resultadob)
	{
		cout << "el segundo numero Es primo" << endl;
	}
	else
	{
		cout << "el segundo numero no es primo" << endl;
	}
	
	system("pause");
	return 0;	
}

