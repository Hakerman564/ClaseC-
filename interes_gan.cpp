#include <iostream>
using namespace std;
// autor: negel eduardo diaz marine
int main() // calcula el interes de un capital
{
 cout << "calculadora de ganancia" << endl;
 //declaracion de variables
 const float interes = 0.15;
 float inversion,ganancia,capital;
 //introduccion de datos
 cout << "Cual sera su inversion" << endl;
 cin >> inversion;
 //proceso de datos
 ganancia = inversion * interes;
 capital = inversion + ganancia;
 //salida de datos
 cout << "Ganancia -->"  << ganancia<< endl;
 cout << "Capital actual --> " << capital << endl;
 system("pause");
 return 0;
}
