#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
// autor : negel eduardo diaz marine #2020-0512

/*
Realiza una aplicación que muestre un menú que contemple las opciones “Archivo”,
“Buscar” y “Salir”, en caso de que no se introduzca una opción correcta se notificará por
pantalla.
*/

void cargadorl()
{
	cout << "Cargando Espere por favor" << endl;
	cout << "<----------> 0 % "<< endl;
	Sleep(5000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<0---------> 10 % "<< endl;
	Sleep(5000);
	system("cls");
	cout << "Cargando Espere por favor" << endl;
	cout << "<00--------> 20 % "<< endl;
	Sleep(5000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<000-------> 30 % "<< endl;
	Sleep(5000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<0000------> 40 % "<< endl;
	Sleep(5000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<00000-----> 50 % "<< endl;
	Sleep(5000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<000000----> 60 % "<< endl;
	Sleep(5000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<0000000---> 70 % "<< endl;
	Sleep(5000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<00000000--> 80 % "<< endl;
	Sleep(5000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<000000000-> 90 % "<< endl;
	Sleep(5000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<000000000~> 99 % "<< endl;
	Sleep(10000);
	system("cls");			
}

void cargadorr()
{
	cout << "Cargando Espere por favor" << endl;
	cout << "<----------> 0 % "<< endl;
	Sleep(1000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<0---------> 10 % "<< endl;
	Sleep(2000);
	system("cls");
	cout << "Cargando Espere por favor" << endl;
	cout << "<00--------> 20 % "<< endl;
	Sleep(1000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<000-------> 30 % "<< endl;
	Sleep(1000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<0000------> 40 % "<< endl;
	Sleep(2000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<00000-----> 50 % "<< endl;
	Sleep(1000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<000000----> 60 % "<< endl;
	Sleep(1000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<0000000---> 70 % "<< endl;
	Sleep(5000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<00000000--> 80 % "<< endl;
	Sleep(5000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<000000000-> 90 % "<< endl;
	Sleep(1000);
	system("cls");	
	cout << "Cargando Espere por favor" << endl;
	cout << "<000000000~> 99 % "<< endl;
	Sleep(500);
	system("cls");	
}

int main()
{	
	int e;
	int sal;
	while(sal == 0){
	e = 0;
	system("cls");
	cout << "destok" << endl;
	cout << "Menu de opciones" << endl;
	cout << "1 Archivos" << endl;
	cout << "2 Buscar" << endl;
	cout << "3 Salir" << endl;
	if(e!=1&&e!=2&&e!=3)
	{
		cin >> e;
	}
	
	if(e==1)
	{
	  cargadorr();
	  cout << "hoja de calculo.txt " << endl;
	  cout << "brazos.png " << endl;
	  cout << "archivo.ccp" << endl;	
	  cout << "archivos cargados con exito" << endl;
	  Sleep(5000);
	  system("cls");			
	}
	else if(e==2)
	{
		cout << "Buscaremos opciones " << endl;	
		Sleep(2000);
		cargadorl();
		cout << "Archivo hola encontrado con exito" << endl;
		Sleep(5000);
		system("cls");	
		
	}
	else if(e==3)
	{
	 sal = 1;	
	}
	
	
	else
	{
		for(int i = 0; i < 25 ; i++)
		{
			cout << "#$ %   %# % " << endl;
			Sleep(100);
			cout << "$@ $ @#  $" << endl;
			Sleep(100);
			cout << "              " << endl;
			Sleep(100);
			cout << "^&(!  %) " << endl;
			Sleep(100);
		}
		Sleep(1500);
		cout << "Macro error su seleccion fue incorecta" << endl;
		Sleep(1500);
		system("cls");
	}
	}
	cout << "Salida con exito" << endl;
	system("pause");
	return 0;
}
	

