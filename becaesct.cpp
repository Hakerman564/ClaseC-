#include <iostream>
using namespace std;
//autor: negel eduardo diaz marine 2020-0512

int main() // calcula si puede ser becado
{
	// inicio
	//declaracion de varables
	int edad;
	char sexo;
	string name;
	cout << "hola nesecitamos algunos datos para ver donde puedes ser becado" << endl;
	//introduccion de datos
	cout << " como se llama? " << endl;
	cin >> name;
	cout << "Cual es su edad?" << endl;
	cin >> edad;
	cout << "hombre o mujer? responda (m / f)" << endl;
	cin >> sexo;
	//salida
	if (edad >= 18 && sexo == 'f')
	{
		cout << name <<  " usted puede resivir la beca de planificacion" << endl;
	}
	
	if (edad >= 18 && sexo =='m')
	{
		cout << "puedes resicibir la beca de calculo avanzado" << endl;
	}
	else
	{
		cout << "no aplica para  ninguna de las beca" << endl;
	}
	system("pause");
	return 0;
}
