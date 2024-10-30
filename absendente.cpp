#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
// Realiza una aplicación que pida tres números y detecte si se han introducido en orden
//ascendente.

	
	int main()
		{
			cout << "ascendencia" << endl;
			bool z;
			int a,b,c;
			cout << "Numero 1" << endl;
			cin >> a;
			cout << "Numero 2" << endl;
			cin >> b;
			cout << "Numero 3" << endl;
			cin >> c;
			
			if(c>b&&b>a)
			{
				z = true;
			}
			
			if(z)
			{
				cout << "Numeros introducidos de manera ascendente" << endl;	
			}
			else
			{
				cout << "Numero subido de manera no ascendente" << endl;	
			}
			
			system("pause");
			return 0;
		}
