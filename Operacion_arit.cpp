#include <iostream>
#include<math.h>
using namespace std;
//Operaciones aritméticas básicas a partir de dos números (suma, resta, multiplicación y división. El nombre del programa será: Operacion_arit.
// autor: negel eduardo diaz marine
int main()
{
	cout << "operaciones aritmeticas" << endl;
	//declareacion de variable
	int desicion, modulo, z, x;
	float a,b, suma, resta, division,multiplicacion, potencia,raiz;
	// desicion
	cout << "que quieres hacer" << endl;
	cout << "1) a + b" << endl;
	cout << "2) a - b" << endl;
	cout << "3) a * b" << endl;
	cout << "4) a / b" << endl;
	cout << "5)festival matematico hacerlo todo" << endl;
	cin >> desicion;
	cout << "a" << endl;
	cin >> a;
	cout << "b" << endl;
	cin >> b;
	//operaciones y salida de datos
	z = floor(a);
	x = floor(b);
	switch(desicion) 
	{
	case 1:
		//suma
		suma = a + b;
		cout << "a + b = " << suma << endl;
	break;
	
	case 2:
		//resta
		resta = a - b;
		cout << "a - b = " << resta << endl;
	break;
	
	case 3:
		//multiplicacion
		multiplicacion = a * b;
		cout << "a * b = " << multiplicacion << endl;
	break;
	
	case 4:
		//division con residuo
		division = floor(a / b);
		modulo = z%x;
		cout << "a / b = " << division << "con residuos --> "  << modulo << endl;
	break;
	
	case 5:
		//todo
		suma = a + b;
		resta = a - b;
		multiplicacion = a * b;
		division = floor(a / b);
		modulo = (z % x);
		cout << "a + b = " << suma << endl;
		cout << "a - b = " << resta << endl;
		cout << "a * b = " << multiplicacion << endl;
		cout << " a / b = (" << division << ") con residuo --> "  << modulo << endl;
	break;
	
		
	default:
		cout << "numero invalido intentalo de nuevo" << multiplicacion << endl;
	}	
	system("pause");
	return 0;
}
