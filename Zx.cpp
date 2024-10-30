#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{
	long int vidas, cantidad;
	srand(time(NULL));
	int aivi, f;
	int v = 0;
	
	
	cout << "numero de intentos" << endl;
	cin >> vidas ;
	
	cout <<"Cantidad numerica" << endl;
	cin >> cantidad;
	
	int nmax = cantidad; 
	int nmin = 1;
	
	cout << "Debes encontrar el numero" << endl;
	long int aztar = rand()%(cantidad+1);
	system("cls");
	for(f = 0; f < vidas; f++)
	{
		cout << "tienes "<< vidas <<" intentos te quedan --> " << vidas-f << endl;
		cin >> aivi;
		
		if(aivi == aztar)
	 	{
	 		v = 1;
	 		f = vidas;
	 	}
	 	else
	 	{
	 		if(aivi < aztar)
			 {
			 	if(aivi < aztar & nmin < aivi)
			 	 {
			 	 	nmin = aivi;	
				 }
				
			 	cout << "el numero esta ^ " << endl;
				cout << "interbalo <" << nmin << "------" << nmax << ">"  << endl;	
			 }
			 else
			 {
			 		if(aivi > aztar & nmax > aivi)
			 	 {
			 	 	nmax = aivi;	
				 }
				cout << "el numero esta v" << endl;	
				cout << "interbalo <" << nmin << "------" << nmax << ">"  << endl;	
			 }	 
		}	
	}
	
	if(v == 0)
	{
		cout << "derrota inminente el numero era --> " << aztar << endl;	
	}
	else
	{
		cout << "Victoria el numero era --> " << aztar << endl;	
	}
	
	system("pause");

}
