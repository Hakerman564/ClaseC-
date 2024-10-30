#include <iostream>
using namespace std;
// autor : negel eduardo diaz marine #2020-0512
/*Crear un programa que reciba un carácter por teclado y compruebe 
si es Mayúscula o Minúscula en caso contrario desplegar un mensaje 
("No corresponde al alfabeto")*/
int main()
{
	cout << "introduccion de mayuscula o minuscula" << endl;
	cout << "intrdusca una letra" << endl;
	char letra;
	cin >> letra;
	switch(letra)
	{
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'F':
	case 'E':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'Ñ':
		cout << "USTED INTRODUJO UNA MAYUSCULA" << endl;
	break;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'f':
	case 'e':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':
	case 'ñ':
	cout << "usted introdujo una minuscula" << endl;
	break;
	default:
	cout << "(No corresponde al alfabeto)" << endl;
	}
	system("pause");	
	return 0;
}
	

