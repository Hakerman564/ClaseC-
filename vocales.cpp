#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
//Crear un programa que pida una letra y detecte si es una vocal.


int main()
	{
		int o = 0;
		char p1;
		cout << "dectetor de vocales" << endl;
		while(o==0)
		{
				cout << "Introduse una Vocal" << endl;
				cin >> p1;	
			switch(p1) 
				{
    				case 'a' : 
    				case 'A' : cout << "Selecionaste la a" << endl;
    				o++;
    				break;
    				case 'e' : 
    				case 'E': cout << "Selecionaste la e" << endl;
    				o++;
    				break;
    				case 'i' : 
    				case 'I': cout << "Selecionaste la i" << endl;
    				o++;
    				break;
    				case 'o' : 
    				case 'O': cout << "Selecionaste la o" << endl;
    				o++;
    				break;
    				case 'u' : 
    				case 'U': cout << "Selecionaste la u" << endl;
    				o++;
    				break;
    				default: cout << "No a introducido una vocal intente otra vez" << endl;
				}
		}
		system("pause");
		return 0;
	}
