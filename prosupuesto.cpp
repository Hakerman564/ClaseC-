#include <iostream>
using namespace std;
//autor: negel eduardo diaz marine 2020-0512

int main() // calcular el prosupuesto de un hospital para sus departamentos
{	
	//declaracion de variables
	float prosupuesto,ginecologia,pediatria,cardiologia,cirujia;
	cout << "Se calculara el prosupuesto de un hospital" << endl;
	cout << "prosupuesto del hospital" << endl;
	cin >> prosupuesto;
	// procesos
	ginecologia =  prosupuesto * 0.3;
	pediatria =  prosupuesto * 0.35;
	cardiologia = prosupuesto * 0.2;
	cirujia =  prosupuesto * 0.1;
	//salida
	cout << "Departamentos" << endl;
	cout << "| ginecologia -->" << ginecologia << endl;
	cout << "| pediatria --> " << pediatria << endl;
	cout << "|cardiologia --> " << cardiologia << endl;
	cout << "| cirujia --> " << cirujia << endl;
	cout << "|total --> " <<  prosupuesto << endl;
	system("pause");
	return 0;
}
