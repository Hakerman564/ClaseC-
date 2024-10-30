#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Realizar un programa que lea un numero introducido por teclado, e imprima la serie de los
numero Fibonacci de dicho número.
*/

	
	int main()
		{
			cout << "numeros fibonacci" << endl;
			int a,b,c,d;
			cout << "introduce un numero" << endl;
			cin >> a;
			
			cout << "serie de numeros fibonacci que les preceden" << endl;
			c = 0;
			b = 1;
			
			while(b < a)
			{
				cout << b << endl;
				d = c;
				c = b;
				b = b + d; 		
			}
			system("pause");
			return 0;
		}
