#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
//Realiza una aplicación que pida 10 números y diga cuál es el mayor y cual el menor.
int main()
{
	cout << "Mayor y menor entre 10 numeros" << endl;
	int n[10];
	int mayor=0,menor=0;
	for(int i =0;i<10;i++)
	{
		cout << "Escribe el numero numero " << i+1 << endl;	
		cin >> n[i];
	}
	
	for(int e =0;e<10;e++)
	{
		if(mayor<n[e])
		{
			mayor = n[e];
		}
		if(menor>n[e])
		{
			menor = n[e];
		}
	}
	
	cout << "El mayor de todo es " << mayor << endl;
	cout << "El menor de todo es " << menor << endl;		
	
	system("pause");
	return 0;
}
