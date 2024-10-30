#include <iostream>
using namespace std;
//autor: negel eduardo diaz marine 2020-0512

int main() //calculador de salario
{	
	// declaracion de variables
	float pagohora,pagohoraex,salario,salarioneto,extra,horas;
	char de;
	cout << "Calculador de salarios" << endl;
	cout << "Cuanto Gana por hora?" << endl;
	//introduccion de datos
	cin >> pagohora;
	cout << "Cuanto horas trabajaste?" << endl;
	cin >> horas;
	// operaciones

	if (horas > 40)
	{
	 salarioneto = pagohora*40;
	 extra = horas - 40;
	 pagohoraex = extra*(pagohora*1.5);		
	}
	else
	{
		salarioneto = pagohora*horas;	
	}

	salario = salarioneto + pagohoraex;
	//salida
	cout << "Salario neto: " << salarioneto << "$RD" << endl;
	cout << "hora extra: " << pagohoraex << "$RD" << endl;
	cout << "Salario Total: "  << salario << "$RD"<< endl;
	system("pause");
	return 0;
}
