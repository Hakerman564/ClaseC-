#include <iostream>
using namespace std;
//autor: negel eduardo diaz marine 2020-0512

int main() // calculo aritmetico
{
	// inicio
	// introducion de variable 
	double x,y,rs,rr,rm,rd;
		cout << "Calculadora basica" << endl;
		cout << "introdusca dos valores" << endl;
		//introducion de datos
		cout << "valor 1" << endl;
		cin >> x;
		cout << "valor 2" << endl;
		cin >>y;
		//operaciones
		 rs = x + y;	
		 rr = x - y;	
		 rd = x / y;	
		 rm = x * y;	
		 //salidas
	 cout << "Resultado "  << x << " + " << y << " = " << rs << endl;
	 cout << "Resultado "  << x << " - " << y << " = " << rr << endl;
	 cout << "Resultado "  << x << " * " << y << " = " << rm << endl;
	 cout << "Resultado "  << x << " / " << y << " = " << rd << endl;
	 
	system("pause");
	return 0;
}
