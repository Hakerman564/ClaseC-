#include <iostream>
using namespace std;
//autor: negel eduardo diaz marine 2020-0512

int main() // invitacion al cine
{
	// inicio declaracion de variable
	char q;
	cout << "quieres salir al cine, responder (s / n o cualquier texto)" << endl;
	// desicion del usuario
	cin >> q;
	//salida
	if (q == 's')
	{
			cout << "ok, Comprare los boletos" << endl;
	}
	else
	{
			cout << "Siento haber molestado, gracias por la atencion" << endl;
	}
	system("pause");
	return 0;
}
