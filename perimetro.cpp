#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Crear una aplicaci�n que muestre un men� donde las opciones sean �Equil�tero�, �Is�sceles�
y �Escaleno�, pida una opci�n y calcule el per�metro del tri�ngulo seleccionado

*/
int main()
	{
		float a,b,c;
		int p;
		cout << "Calcular perimetro de trialgulo" << endl;
		cout << "Que tipo de triangulo quiere calcular" << endl;
		cout << "1 equilatero" << endl;
		cout << "2 Isoseles" << endl;
		cout << "3 Escaleno" << endl;
		cin >> p;
		switch(p) //donde opci�n es la variable a comparar
{
    case 1: 
    cout << "Acontinuacion introdusca un solo valor";
    cout << endl;
    cout << ">";
    cin >> a;
    cout << endl;
    cout << " el perimetro del triagulo es igual a " << a*3 << endl;
    break;
    case 2: 
     cout << "Acontinuacion introdusca el valor de los dos iguales y el tercero diferente ";
    cout << endl;
    cout << ">";
    cin >> a;
    cout << endl;
    cout << ">";
    cin >> b;
    cout << endl;
    cout << " el perimetro del triagulo es igual a " << b+a*2 << endl;
    break;
    case 3: 
     cout << "Acontinuacion introdusca el valor de los tres lados";
    cout << endl;
    cout << ">";
	cin >> a;
	cout << endl;
    cout << ">";
    cin >> b;
    cout << endl;
    cout << ">";
    cin >> c;
    cout << endl;
    cout << " el perimetro del triagulo es igual a " << a+b+c << endl;
    break;
    default:
    cout << "seleccion equivocada" << endl;
}
		
		system("pause");
		return 0;
	}
