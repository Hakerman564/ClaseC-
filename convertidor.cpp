#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Crear una aplicación que pase de Kg a otra unidad de medida de masa, mostrar en pantalla
un menú con las opciones posibles.

*/
int main()
	{
		cout << "convertidor" << endl;
		float peso;
		cout << "escriba su peso en kilogramo" << endl;
		cin >> peso;
		
		cout << "Tonelada Metrica = " << 0.001*peso << endl;
		cout << "Onza = " << peso*35.27 << endl;
		cout << "Libra = " << 2.2*peso << endl;
		
		system("pause");
		return 0;
	}
