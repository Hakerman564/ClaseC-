#include <iostream>
#include "conio.h"
using namespace std;
//autor negel diaz marine 2020-0512
/*
Escribir un programa que solicité al usuario un carácter y que situé
ese carácter en el centro de la pantalla. El usuario debe poder a
continuación desplazar el carácter, pulsando las letras A= (arriba),
B=(abajo), I=(izquierda), D=(Derecha) y F=(fin) para terminar su
ejecución.
*/


void actualizar(int x, int y, char w);


int main()
	{
		cout << "Buss" << endl;
		char pow;
		int base;
		int px = 10;
		int py = 10;
		bool game = false;
		cout << "introdusca un caracter" << endl;
		cin >> pow;
		system("cls");
		actualizar(px,py,pow);
		while(!game)
		{
			if(kbhit())
			{
				switch(getch())	
				{
					case 119:
						if(py > 1)
						{
							py = py - 1;
							actualizar(px,py,pow);
						}
						break;
					case 115:
						if(py < 20)
						{
							py = py + 1;
							actualizar(px,py,pow);
						}
						break;
					case 97:
						if(px > 1)
						{
							px = px - 1;
							actualizar(px,py,pow);
						}
						
						break;
					case 100:
						if(px < 21)
						{
							px = px + 1;
							actualizar(px,py,pow);
						}
						break;	
					case 102:
						cout << "crach" << endl;
						game = true;
						break;
					
				} 
			}
		}
		system("pause");
		return 0;
	}
	
	void actualizar(int x, int y, char w)
	{
		int am = 22;
		int bm = 22;
		system("cls");
		for(int a = 0; a < am;a++)
		{
			for(int b = 0; b < bm;b++)
			{
			  if(a==21||a==0||b==0)
			  {
			  cout << "#";	
			  }
			  if((b>0&&a!=0&&a!=21)||a<0)
			  {
			  	if(b!=x||a!=y)
			  	{ 
			   	 cout << " ";
			   	}
			  }
			  if(b==x&&a==y)
			  {
			  	cout << w;
			  }
			  if(b==21)
			  {
			  	cout << "#";	
			  }
			}
			cout << endl;
		}
	}
	
	
	
