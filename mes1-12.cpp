#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
//Realiza una aplicación que pida un número del 1 al 12 y diga el nombre del mes correspondiente
int main()
	{
		cout << "Meses del año" << endl;
		int x=0;
		string mes[12] = {"Enero","Febrero","Marzo","abril","Mayo"
							,"Junio","Julio","Agosto","Septiembre",
							"Otubre","Noviembre","Diciembre"};
		while(x<1||x>12)
		{
		 		cout << "Escribe un numero 1 - 12" << endl;
		 		cin >> x;
				 if(x>0&&x<13)
				 {
				 	cout << mes[x-1] << endl;
					 }	
					 else{cout << "Invalido" << endl;}
		}
		system("pause");
		return 0;
	}
