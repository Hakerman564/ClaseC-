//inicio
#include <iostream>
using namespace std;
//autor: negel eduardo diaz marine 
int main()
{
	//creacion del var
	enum Semana
	{lunes, martes, miercoles, jueves, viernes, sabado, domingo};
	 //entrada
	 Semana dia;
	 dia = martes;
	 
	 enum Estadocivil
	 {soltero, casado, viudo, divorciado};
	 
	 Estadocivil pepe;
	 pepe = soltero;
	 //salida
	cout << pepe << endl;
	cout << sabado << endl;
	system("pause");
	//fin
}
