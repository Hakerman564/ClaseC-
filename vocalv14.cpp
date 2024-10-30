#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
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
		case 'a':
		case 'A':
			cout << "has introduccido la vocal a" << endl;
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

