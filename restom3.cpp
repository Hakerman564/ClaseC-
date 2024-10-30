#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Crear una aplicación que tome tres números y diga si el tercero es el resto de la división de
los dos primeros.

*/
int main()
	{
			int a,b,c;
		cout << "Calculadora a/b resto = c" << endl;
		cout << "numero 1" << endl;
		cin >> a;
		cout << "Numero 2" << endl;
		cin >> b;
		cout << "numero 3" << endl;
		cin >> c;
		
		
		if(c == (a%b))
		{
		 cout << " el tercero es igual al resto de la divicion de primero entre el segundo por que "<< endl;
		 cout  << a << " / " << b << "deja como resto = " << a%b << endl;
		}
		else
		{
		 cout << " el tercero no es igual al resto de la divicion de primero entre el segundo por que "  << endl;
		 cout  << a << " / " << b << "deja como resto = " << a%b << endl;	
		}
		
		system("pause");
		return 0;
	}
