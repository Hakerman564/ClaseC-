#include <iostream>
using namespace std;
// autor : negel eduardo diaz marine #2020-0512
/*
Hacer un programa que calcule la sumatoria de cuatro notas y 
decir si el estudiante aprobó o reprobó la asignatura.
*/
int main()
{
	cout << "comprobacion de asignatura" << endl;
	int a,b,c,d,r;
	
	cout << "Introdusca una nota parcial 1 (0-20)" << endl;
	cin >> a;
	
	cout << "Introdusca una nota parcial 2 (0-20)" << endl;
	cin >> b;
	
	cout << "Introdusca una nota parcial 3 (0-20)" << endl;
	cin >> c;
	
	cout << "Introdusca una nota final 1 (0-40)" << endl;
	cin >> d;
	
	r = a+b+c+d;
	
	if(r > 70)
	{
		cout << "su nota final es de (" << r  << ") puntos A aprovado la materia"<< endl;	
	}
	else
	{
		cout << "su nota final es de (" << r  << ") puntos a Reprovado a la materia"<< endl;
	}
	system("pause");
	return 0;
}
	

