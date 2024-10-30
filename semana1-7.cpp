#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
//Realiza una aplicación que pida un número del 1 al 7 y diga el día de la semana correspondiente
int main()
	{
		cout << "Dias de la semana" << endl;
		int x;
		string semana[7] = {"Domingo","Lunes","Marte","Miercole",
							"Jueves","Viernes","Sabado"} ;
		
		while(x<1||x>7)
		{
		 		cout << "Escribe un numero 1 - 7" << endl;
		 		cin >> x;
				 if(x>0&&x<8)
				 {
				 	cout << semana[x-1] << endl;
					 }	
					 else{cout << "Invalido" << endl;}
		}
		system("pause");
		return 0;
	}
