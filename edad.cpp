#include <iostream>
using namespace std;
//Autor: negel eduardo diaz marine #2020-0512
//inicio de funcion main
int main()
{
	int na, edad;
	string nombre; 
	//medidor de edad para saber si eres menor o un adulto
	//introduccion nombre de usuario y a�o de nacimiento
	cout << "en que a�o naciste" <<endl;
	cin >> na;
	cout << "Nombre de usuario" <<endl;
	cin >> nombre;
	//proceso
	edad = 2020 - na;
	//salida
	cout << nombre <<" Usted tiene " << edad << " a�os" <<endl;
	system("pause");
	return 0;
}
