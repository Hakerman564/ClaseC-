#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Crear una aplicación que tome tres números y diga si la multiplicación de los dos primeros
es igual al tercero.

*/
int main()
	{
		int a,b,c;
		cout << "Calculadora a*b = c" << endl;
		cout << "numero 1" << endl;
		cin >> a;
		cout << "Numero 2" << endl;
		cin >> b;
		cout << "numero 3" << endl;
		cin >> c;
		
		
		if(c == (a*b))
		{
		 cout << "la multiplicacion del primero por el segundo es igual al tercero por que "  << endl;
		 cout  << a << " * " << b << "= " << a*b << endl;
		}
		else
		{
		 cout << "la multiplicacion del primero por el segundo no es igual al tercero por que "  << endl;
		 cout  << a << " * " << b << "= " << a*b << endl;	
		}
		
		system("pause");
		return 0;
	}
