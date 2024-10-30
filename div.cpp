#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
 Escribir una función lógica de dos argumentos enteros, que
devuelva verdadero si uno divide al otro y falso en caso contrario.
*/
bool dividir(int dividendo, int dividor);

int main()
	{
		cout << "dividendo y dividor" << endl;
		int dividendo;
		int divisor;
		cout << "Introdusca el dividendo" << endl;
		cin >> dividendo;
		cout << "Introdusca el dividor" << endl;
		cin >> divisor;
		if(dividir(dividendo, divisor))
		{
			cout << "El argumento a puede dividir al agrumento b por lo tanto es Verdad" << endl;	
		}
		else
		{
			cout << "El argumento a no puede dividir al agrumento b por lo tanto es falso" << endl;	
		}
		system("pause");
		return 0;
	}
	
	bool dividir(int dividendo, int dividor)
	{
		bool c;
		if(dividendo % dividor == 0)
		{
			c = true;
		}
		else
		{
			c = false;
		}
		return c;
	}
