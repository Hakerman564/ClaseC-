#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Realiza una aplicación que calcule el sueldo que le corresponde al trabajador de una empresa
que cobra 960,000 pesos anuales, el programa debe realizar los cálculos en función de los
siguientes criterios:
1. Si lleva más de 15 años en la empresa se le aplica un aumento del 20%.
2. Si lleva menos de 11 años pero más que 5 se le aplica un aumento del 10%.
3. Si lleva menos de 5 años pero más que 3 se le aplica un aumento del 8%.
4. Si lleva menos de 3 años se le aplica un aumento del 5%.
*/
int main()
	{
		int edad;
		 double anual,mensual,anual2,mas;
		cout << "Aumentador de sueldos" << endl;
		cout << "cuanto ustes gana al año" << endl;
		cin >> anual;
		cout  << "Cuantos años tienes trabajando" << endl;
		cin >> edad;
		
		if(edad >= 3 && edad < 4)
		{
			mas = 0.05*anual;
		
		}
		if(edad >= 5 && edad < 10)
		{
			mas = 0.08*anual;	
			
		}
		if(edad >= 11 && edad < 14)
		{
			mas = 0.1*anual;	
			
		}
			if(edad >= 15)
		{
			mas = 0.2*anual;
			
		}	
		anual2 = anual+mas;
		mensual = anual2/12;
		cout  << "Ustes a obtenido un amuento de " << mas << " pesos" << endl;
		cout  << "desde ahora ganara " << anual2 << " pesos anuales" << endl;
		cout  << "y " << mensual << " pesos mensuales" <<  endl;
		system("pause");
		return 0;
	}
