#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Crear una aplicación que tome dos números y diga si ambos son pares o impares.
*/
int main()
	{
		cout << "Calculado de impares" << endl;
		int n1,n2;
		float r1,r2;
		
		cout << "Escribe el primer numero" << endl;
		cin >> n1;
		r1 = n1%2;
		
		cout << "Escribe el segundo numero" << endl;
		cin >> n2;
		r2 = n2%2;
		
		if(r1==0)
		{
			cout << "El primer numero es par" << endl;
		}
		else
		{
			cout << "El primer numero es impar" << endl;	
		}
		
		if(r2==0)
		{
			cout << "El segundo numero es par" << endl;
		}
		else
		{
			cout << "El el segundo numero es impar" << endl;	
		}
		
		
		system("pause");
		return 0;
	}
