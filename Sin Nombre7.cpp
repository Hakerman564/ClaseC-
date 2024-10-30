#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
void chz(char x, char z) // toma los valores de switc y lo convierte un una funcion
{
		case x:
		case z:
		cout << "has introduccido la vocal "<< x << endl;	
}
int main() //switch con vocales
{
	//declaracion de variable
	char vocal;
	cout << "verificador de vocales" << endl;
	cout << "--introduce una vocal" << endl;
	// introduccion de datos
	cin >> vocal;
	// switch verificara si si variable esta en su lista de vocales
	switch(vocal)
	{
		chz('a','A');
		break;
		case 'e':
		case 'E':
			cout << "has introduccido la vocal e" << endl;
		break;
		case 'i':
		case 'I':
			cout << "has introduccido la vocal i" << endl;
		break;
		case 'o':
		case 'O':
			cout << "has introduccido la vocal o" << endl;
		break;
		case 'u':
		case 'U':
			cout << "has introduccido la vocal u" << endl;
		break;
		default:
			cout << "introduciste una letra o numero esto es invalido" << endl;
	}
	//fin
	system("pause");
	return 0;	
}

