#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
int main() // programa usuario
{
	//declaracion de datos
	string password = "adf1515", passu;
	int c = 0, m = 0;
	cout << "Entrado al usuario" << endl;
	while (m < 6 && c < 1)
	{
		// introducion de datos
		cout << "introduce tu password" << endl;
		cin >> passu;
		system("cls");
		// verifica la contraseña
		if(password == passu)
		{
			c = c + 1; 	
		}
		else
		{
			cout << "password incorreta" << endl;
			cout << "intentelo de nuevo" << endl;
				
		}
		m = m + 1;
	}
	//salida de datos
	if(c == 1)
		{
			cout << "bienbenido usuario" << endl;
		}
		else
		{
			cout << "usted a infrigido los limites de intentos  intentelo en otra ocacion" << endl;
		}
		//fin
	system("pause");
	return 0;	
}

