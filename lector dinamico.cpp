#include <iostream>
#include <cstdlib>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Hacer un programa que lea y corresponda un array con un puntero y lo recorra por completo. 
*/
int main()
	{
		cout << "Lector" << endl;
		int *p = new int[10]; // crear memoria dinamica y almacenar la direccion ene el puntero p
		
		// introduccion
		for(int i = 0; i < 10 ; i++)
			{
			p[i] = i;	
			}
			
		for(int i = 0; i < 10 ; i++)
			{
			cout  << *(p+i) << endl;
			}
			

		delete[] p;
		system("pause");
		return 0;
	}
