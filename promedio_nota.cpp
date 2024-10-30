#include <iostream>
using namespace std;
// autor: negel eduardo diaz marine
// inicio de main
int main()
{
	//delclaracion de variables
	int parcial, practica, examen;
	float promedio;
	string nombre;
	cout << "calculador de promedio" << endl;
	// introduccion de datos
	cout << "Cual es tu nombre de usuario?" << endl;
	cin >> nombre;
	cout << "nota del primer parcial?" << endl;
	cin >> parcial;
	cout << "promedio de las practicas?" << endl;
	cin >> practica;
	cout << "nota de el examen final?" << endl;
	cin >> examen;
	// procesos de datos
	promedio = (parcial + practica + examen)/3;
	//salida de datos
	cout << nombre << " tu promedio es de " << promedio << " Puntos" << endl;
	system("pause");
	return 0;
}
