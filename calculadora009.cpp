#include <iostream>
#include <cmath>
using namespace std;
// autor : negel eduardo diaz marine #2020-0512
/*
Hacer un Programa que pida ingresar dos números por teclado, 
hacer un menú que contemple las opciones "Suma", "Resta", "Multiplicación", "División". 
Seleccionar una opción e imprimir el resultado, en caso de que 
no se introduzca una opción correcta se notificara por pantalla.
*/
int main()
{
	cout << "Super calculadora" << endl;
	int salida =0;
	while(salida == 0)
	{
		float r;
		float a,b;
		int modular,z;
		cout << "Que desea realizar" << endl;
		cout << "Suma(1)" << endl;
		cout << "Resta(2)" << endl;
		cout << "Multiplicacion(3)" << endl;
		cout << "Division(4)" << endl;
		cout << "Division con restos(5)" << endl;
		cout << "Introdusca cualquera letra o numero para salir" << endl;

			cin >> modular;
			
		cout << "Antes introdusca dos numeros" << endl;
		cout << "primero" << endl;
		cin >> a;
		cout << "segundo" << endl;
		cin >> b;
		switch(modular)
	{
	case 1:
		r = a + b;
		cout << "Suma" << endl;
		cout << "-----------" << endl;
		cout << " " << a << endl;
		cout << "+" << b << endl;
		cout << "----------" << endl;
		cout << r << endl;
		system("pause");
		system("cls");
	break;
	case 2:
		 r = a - b;
		cout << "Resta" << endl;
		cout << "-----------" << endl;
		cout << " " << a << endl;
		cout << "-" << b << endl;
		cout << "----------" << endl;
		cout << r << endl;
		system("pause");
		system("cls");
	break;
	case 3:
		 r = a * b;
		cout << "Multiplicacion" << endl;
		cout << "-----------" << endl;
		cout << " " << a << endl;
		cout << "*" << b << endl;
		cout << "----------" << endl;
		cout << r << endl;
		system("pause");
		system("cls");
	break;
	case 4:
		 r = a / b;
		cout << "Divison" << endl;
		cout << "-----------" << endl;
		cout << a << endl;
		cout << "---------- = " << r << endl;
		cout <<  b << endl;
		system("pause");
		system("cls");
		break;
	case 5:
		int x,y;
		x = a;
		y = b;		
	 	z = x % y;
		cout << "Divison con resto" << endl;
		cout << "-------------" << endl;
		cout << a << " | " << b << endl;
		cout << "-------------" << endl;
		cout << "= " <<  round(a/b) << " Residuo =  "  << z << endl;
		system("pause");
		system("cls");
	break;
	default:
	system("cls");
	salida = 1;
	}
	}
	
	system("pause");
	return 0;
}
	

