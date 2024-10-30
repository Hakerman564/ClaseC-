//inicio de programa
#include <iostream>
using namespace std;
//Autor: negel eduardo diaz marine #2020-0512
//inicio de funcion main
int main() // calcula er area de un triangulo retangulo
{
//varables de area de un triangulo rectangulo	
	double base, area, altura;
	cout << "Calculadora de area de triangulo" << endl;
	//introduccion de datos
	cout << "Base del triangulo" << endl;
	cin >> base;
	cout << "altura del triangulo" << endl;
	cin >> altura;
	//procesos;
	area = (base*altura)/2;
	//salida
	cout << "El area es igual -->" << area << endl;
	//pause y fin del codigo
	system("pause");
	return 0;
}
