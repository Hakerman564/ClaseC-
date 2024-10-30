#include <iostream>
using namespace std;



int main()
	{
	int desi,opcion,salida;
	string registro[12] = {"enero","febrero","marzo","abril","mayo","junio",
							"julio","agosto","septiembre","octubre","noviembre","diciembre"};
	int mes[12];
	mes[0]=31;
	mes[1]=28;
	mes[2]=31;
	mes[3]=30;
	mes[4]=31;
	mes[5]=30;
	mes[6]=31;
	mes[7]=31;
	mes[8]=30;
	mes[9]=31;
	mes[10]=30;
	mes[11]=31;
	//desicion
	cout << "Calendario" << endl;
	while(salida == 0)
	{
		cout << "Calendario" << endl;
		while(opcion<0||opcion>=13)
			{
			cout << "Seleciona un mes escribe un numero de 1 al 12" << endl;	
			cin >> opcion;
			opcion = opcion -1;
			}
			int m=0;
			cout << registro[opcion] << endl;
			cout << "-----------------------" << endl;
			for(int i=0;i<mes[opcion];i++)
			{
				cout << i + 1 << " ";
				
				if (m>5)
				{
					cout << endl;
					m = 0;
				}
				m++;
			}
			cout << endl;
			cout << "-----------------------" << endl;
		cout << "(1) revisar otro mes" << endl;
		cout << "introdusca cual Salir" << endl;
		cin >> desi;
		if(desi != 1)
				{
					salida = 1;
				}	
		system("cls");
		opcion=-1;
	}
	
	
	
	system("pause");
	return 0;	
	}
