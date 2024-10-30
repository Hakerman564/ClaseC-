#include <iostream>
#include <cmath>
using namespace std;
//negel diaz autor

float rdecimal(float x)
	{
		float base;
		base = ((round(x*100))/100);
		return base;
	}
 

int main()
	{
		cout << "Calculadora suma decimal" << endl;
		float x,y,r;
		int desicion,salida;
		while(salida==0)
			{
				cout << "Calculadora suma decimal" << endl;
				cout << "primer numero decimal: ";
				cin >> x;
				cout << endl;
				cout << "segundo numero decimal: ";
				cin >> y;
				cout << endl;
				//procesamiento
				r = x + y;
				r = rdecimal(r);
				x = rdecimal(x);
				y = rdecimal(y);
				r = x + y;
				//salida
				cout << ""  << endl;
				cout << " " << x << endl;
				cout << "+" << y << endl;
				cout << "----------------" << endl;
				cout << "" << r << endl;
				cout << ""<< endl;
				cout << "(1) volver a calcular" << endl;
				cout << "introdusca cual Salir" << endl;
				cin >> desicion;
				if(desicion != 1)
				{
					salida = 1;
				}
				system("cls");
			}
			system("pause");
			return 0;
	}
