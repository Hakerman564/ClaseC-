#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
 Crear  un   programa   que   permita   hacer   las operaciones de suma, resta, multiplicación y división de  
 números  complejos.                       
 El  numero complejo a de definirse Como una estructura.
*/

struct nc{
	float numerico;
	float literal;
};
int main()
	{
		cout << "Calculadora de numeros complejos" << endl;
		struct nc complejo1;
		struct nc complejo2;
		cout << "Primer numero complejo" << endl;
		cout << "Introduce la parte parte real" << endl;
		cin >> complejo1.numerico;
		cout << "introduce la parte imaginaria" << endl;
		cin >> complejo1.literal;
		cout << "Segundo numero complejo" << endl;
		cout << "Introduce la parte parte real" << endl;
		cin >> complejo2.numerico;
		cout << "introduce la parte imaginaria" << endl;
		cin >> complejo2.literal;
		
		cout << "Suma: " << complejo1.numerico + complejo2.numerico << " + " << complejo1.literal + complejo2.literal 
		<< "i" << endl;
		cout << "Resta: " << complejo1.numerico - complejo2.numerico << " + " << complejo1.literal - complejo2.literal 
		<< "i" << endl;
		cout << "Multiplicacion: " << ((complejo1.numerico*complejo2.numerico) - (complejo1.literal * complejo2.literal))
		<< " + " << ((complejo1.numerico*complejo2.literal)+(complejo2.numerico*complejo1.literal)) 
		<< "i" << endl;
		cout << "Division: " << ((complejo1.numerico*complejo2.numerico) + (complejo1.literal * complejo2.literal))
		<<"/" << (complejo2.numerico*complejo2.numerico)+(complejo2.literal*complejo2.literal) << " + " 
		<< ((complejo1.literal*complejo2.numerico)-(complejo1.numerico*complejo2.literal)) 
		<< "i" << "/" << (complejo2.numerico*complejo2.numerico)+(complejo2.literal*complejo2.literal) << endl;
		
		system("pause");
		return 0;
	}
