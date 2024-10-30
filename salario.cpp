#include <iostream>
using namespace std;
//Autor: negel eduardo diaz marine #2020-0512
//inicio de funcion main
int main() // calculador de salario
{
	//declaracion de datos
	float salarioh,horas,salarioneto;
	string nombre;
	cout << "Calculador de salario" << endl;
	// introduccion de datos
	cout << "Nombre de usuario" << endl;
	cin >> nombre;
	cout << "Hras trabajadas" << endl;
	cin >> horas;
	cout << "Pago por hora" << endl;
	cin >> salarioh;
	// procesos
	salarioneto = horas * salarioh;
	//salida d datos
	cout << "cuenta de "  << nombre << endl;
	cout << "--------------" << endl;
	cout << "salario neto --> " << salarioneto << endl;
	cout << "--------------" << endl;
	system("pause");
	return 0;
}
