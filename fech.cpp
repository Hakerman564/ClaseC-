#include <iostream>
#include <cstdlib>

using namespace std;
//autor negel diaz marine 2020-0512
/*
Escribir un programa mediante una función que acepte un número
de días, mes y año, y lo visualice en el formato dd/mm/aa.
Por ejemplo, los valores 9, 11 y 1944 se visualicen como; 9/11/44.
*/

void fecha(int x , int y , int z);

int main()
	{
		cout << "Paso a fecha" << endl;
		int dia,mes,a,z;
		char anual[4];
		string s,e;
		cout << "Introdusca el dia" << endl;
		cin >> dia;
		cout << "Introdusca el mes" << endl;
		cin >> mes;
		z = mes;
		cout << "Introdusca el  año" << endl;
		cin >> anual;
		mes = z;
		s = anual[2];
		e = anual[3];
		s += e;
		a = atoi(s.c_str());
		fecha(dia,mes,a);
		system("pause");
		return 0;
	}
	
void fecha(int x , int y , int z)
{
	cout << "fecha: " << x << "/" << y << "/" << z << endl;	
}
