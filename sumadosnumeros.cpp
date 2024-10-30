#include <iostream>
#include <cmath>
using namespace std;
//autor negel diaz marine 2020-0512
//Realiza una aplicación que pida tres números e indicar si el tercero es igual a la suma del
//primero y el segundo.
int main()
{
	cout << "Igual a la suma de 2 numeros" << endl;
	int a,b,c,sumav;
			cout << "Numero 1" << endl;
			cin >> a;
			cout << "Numero 2" << endl;
			cin >> b;
			cout << "Numero 3" << endl;
			cin >> c;
			
			sumav = a+b;
			
			if(sumav == c)
			{
					cout << "el tercer numero es igual a la suma de los primero dos ya que " 
								<< a << " + " << b << " = " << c << endl;
			}
			
			else
			{
				cout << "no el tercer numero no es i gual a la suma de los primero 2 por una diferencia de " 
					<< abs(c - sumav) << " Unidades" << endl;
			}
	system("pause");
	return 0;
}
