#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
//Crear un programa que sólo permita introducir los caracteres S y N.


int main()
	{
		int o = 0;
		char p1;
		cout << "solo S y N" << endl;
		while(o==0)
		{
				cout << "Te gusta programar" << endl;
				cin >> p1;	
			switch(p1) 
				{
    				case 'S' : cout << "Que Bien a mi tambien" << endl;
    				o++;
    				break;
    				case 'N': cout << "Ok entiendo, no es lo tuyo" << endl;
    				o++;
    				break;
    				default: cout << "se espesifico que solo S y N, mayusculas porfabor" << endl;
				}
		}
		system("pause");
		return 0;
	}
