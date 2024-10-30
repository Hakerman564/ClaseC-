#include <iostream>
using namespace std;

	struct Movil
	{
		char marca[20];
		char modelo[25];
		char sistema[15];
		char color[10];
		int peso;
	};
	
int main()
{
	Movil mimovil;
	cout << "marca: ";
	cin >> mimovil.marca;
	cout << "modelo: ";
	cin >> mimovil.modelo;
	cout << "sistema: ";
	cin >> mimovil.sistema;
	cout << "color: ";
	cin >> mimovil.color;
	cout << "peso: ";
	cin >> mimovil.peso;

	cout << mimovil.marca << endl;
	cout << mimovil.modelo << endl;
	cout << mimovil.sistema << endl;
	cout << mimovil.color << endl;
	cout << mimovil.peso << endl;
	cout << "-----------" << endl;
	
	cout << "" << endl;
	system("pause");
}
