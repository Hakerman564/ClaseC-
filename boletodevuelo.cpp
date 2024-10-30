#include <iostream>
using namespace std;
//autor Negel diaz marine 2020-0512

int main() //Boleto de vuelo
{
	//Var
	string nombre;
	float precio;
	int residencia;
	

	//Introduccion
	cout << "Vamos a buscar el precio de su boleto de viaje" << endl;
	cout << "Nombre-->";
	cin >> nombre ;
	cout << "hacia donde viajaras (1 New York, 2Boston, 3 Miami, 4 España, 5 Italia) -->";
	cin >> residencia;

	//proceso
	
	switch(residencia)
	{
	case 1: 
	precio = 300;	
	break;
	case 2:
	 precio = 350;	
	break;
	case 3:
	 precio = 400;	
	break;
	case 4:
	 precio = 900;	
	break; 
	case 5:
	 precio = 950;	
	break; 
	default:
	 cout << "Invalido Ponga una de las opciones correctas" << endl;
	}
	
	//salida
	cout << nombre << " El precio de su boleto de Vuelo es de  (" << precio << "US$)" << endl;

	cout << "" << endl;
	system("pause");
	return 0;
}
