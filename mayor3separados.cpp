#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
//Crear un programa que pida 3 números y los muestre en pantalla de mayor a menor en líneas
//distintas. En caso de haber números iguales se IMPRIMA en la misma línea
int main()
	{
		cout << "Ordenador de numero menor a mayor o igualdor + imprimir en linea" << endl;
	 	int a,b,c;
	 	int vector[3];
	 	int cz;
	 	cout << "Numero 1" << endl;
		cin >> a;
		cout << "Numero 2" << endl;
		cin >> b;
		cout << "Numero 3" << endl;
		cin >> c;
	 	
	 	
	 	if((a==b)&&(b==c)&&(a==c))
	 	{	
	 		vector[0] = a;
			vector[1] = b;
			vector[2] = c;	
			cz=3;
		}
		
		if((a!=b)&&(b!=c)&&(a!=c))
	 	{	
	 		if((a>b)&&(a>c))
		 	{
				vector[0] = a;
				if(b>c)
					{
						vector[1] = b;
						vector[2] = c;
					}	
				else
					{
						 vector[1] = c;
						 vector[2] = b;
					 }
			}
		
		if((b>a)&&(b>c))
		 	{
				vector[0] = b;
				if(a>c)
				{
					 vector[1] = a;
					 vector[2] = c;	
				}
				else
				{
					 vector[1] = c;
			 		 vector[2] = a;
				}
			
		 	}
		if((c>a)&&(c>b))
		 	{
			vector[0] = c;
			if(b>a)
				{
			 		vector[1] = b;
			 		vector[2] = a;
				}
			else
				{
			 		vector[1] = a;
					vector[2] = b;
				}
		 }		
			cz=1;
		}
		
		if(a==b&&a!=c)
		{
			if(a>c)
			{
				vector[0] = a;
				vector[1] = b;
				vector[2] = c;
				cz =2;
			}
			else
			{
				vector[0] = c;
				vector[1] = a;
				vector[2] = b;
					cz =2;
			}	
		}
		if(a==c&&a!=b)
		{
			if(a>b)
			{
				
				vector[0] = a;
				vector[1] = c;
				vector[2] = b;
					cz =2;
				
			}
			else
			{
				vector[0] = b;
				vector[1] = a;
				vector[2] = c;
					cz =2;
			}	
		}
		if(b==c&&b!=a)
		{
			if(b>a)
			{
				vector[0] = b;
				vector[1] = c;
				vector[2] = a;
					cz =2;
			}
			else
			{
				vector[0] = a;
				vector[1] = b;
				vector[2] = c;
					cz =2;
			}	
		}
				cout << cz << endl;
	 	
	 		for(int i=0;i<3;i++)
			{
				if(cz==1)
				{
				cout << "----------------- " << endl;
				cout << vector[i] << endl;	
				}
				if(cz==2)
				{
					if(vector[0]==vector[1])
					{
						cout << "----------------- " << endl;
						cout << vector[0] <<  ", ";
						cout << vector[1] << endl;
						cout << "----------------- " << endl;
						cout << vector[2] << endl;
						i=3;
					}
					else
					{
						cout << "----------------- " << endl;
						cout << vector[0] <<  endl;
						cout << "----------------- " << endl;
						cout << vector[1] << ", ";
						cout << vector[2] << endl;
						i=3;
					}
				}
				
				if(cz==3)
				{
				cout << vector[i] << ", ";	
				}
			}
	 	
		system("pause");
		return 0;	
	}
		
	
