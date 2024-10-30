#include <iostream>
using namespace std;
	
	float suma(float x,float y)
	{
		float suma;
		suma = x + y;
		return suma;	
	}
	
		float resta(float x,float y)
	{
		float resta;
		resta = x - y;
		return resta;	
	}
	
		float multi(float x,float y)
	{
		float multi;
		multi = x * y;
		return multi;
	}
	
		float division(float x,float y)
	{
		float division;
		division = x / y;
		return division;
		
	}
	
	int main()
	{
		float n1,n2,r;
		int eleccion;
		cout << "Calculadora" << endl;
		cout << "Que desea hacer" << endl;
		cout << "(1) sumar las 2 cantidades" << endl;
		cout << "(2) resta las 2 cantidades" << endl;
		cout << "(3) multiplica las 2 cantidades" << endl;
		cout << "(4) divide las 2 cantidades" << endl;
		cin >> eleccion;
		
		cout << "Escriba 1 numero" << endl;
		cin >> n1;
		cout << "escriba otro numero" << endl;
		cin >> n2;
		
		switch(eleccion)
			{
    				case 1 : 
    				r = suma(n1,n2);
    				cout << "suma =" << r << endl;
    				break;
    				case 2 : 
    				r = resta(n1,n2);
    				cout << "resta =" << r << endl;
    				break;
    				case 3 : 
    				r = multi(n1,n2);
    				cout << "multiplicacion =" << r << endl;
    				break;
    				case 4 : 
    				r = division(n1,n2);
    				cout << "division =" << r << endl;
    				break;
    				default: cout << "Cantidad invalida" << endl;
    			}
		system("pause");
		return 0;
	}
