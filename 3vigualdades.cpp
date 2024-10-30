#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
//Realiza una aplicación que pida 3 números y los muestre en pantalla, el mayor, la mediana y
//el menor, en caso contrario indicar cuáles son iguales o diferente.
int main()
	{
		cout << "Ordenador de numero menor a mayor o igualdor" << endl;
		int a,b,c,n1,n2,n3,f;
		int iguales[3];
		int diferente =0;
		cout << "Numero 1" << endl;
		cin >> a;
		cout << "Numero 2" << endl;
		cin >> b;
		cout << "Numero 3" << endl;
		cin >> c;
		
		if(a!=b&&b!=c&&a!=c)
		{
			if((a>b)&&(a>c))
		 	{
				n1 = a;
				if(b>c)
					{
						 n2 = b;
			 			 n3	= c;
					}	
				else
					{
						 n2 = c;
						 n3	= b;
					 }
			}
		
		if((b>a)&&(b>c))
		 	{
				n1=b;
				if(a>c)
				{
					 n2 = a;
					 n3	= c;	
				}
				else
				{
					 n2 = c;
			 		 n3	= a;
				}
			
		 	}
		if((c>a)&&(c>b))
		 	{
			n1 =c;
			if(b>a)
				{
			 		n2 = b;
			 		n3	= a;
				}
			else
				{
			 		n2 = a;
					n3	= b;
				}
		 }	
		 	cout << n3 << " --> " << n2 << " --> " << n1 << endl;
		}
		
		else
		{
			if(a==b)
				{
					if(a==c)
					{
						f=3;
						iguales[0] = a;
						iguales[1] = b;
						iguales[2] = c;		
					}
					
					if(c!=a&&c!=b)
					{
						f=2;
						diferente = c;
						iguales[0] = a;
						iguales[1] = b;
					}
				
			}
			
			if(c==b&&a!=b&&a!=c)
				{
					f=2;
					diferente = a;
					iguales[0] = b;
					iguales[1] = c;
				}	
				
			if(a==c&&b!=a&&b!=c)
				{
					f=2;
					diferente = b;
					iguales[0] = a;
					iguales[1] = c;
				}
				
				
			cout << "diferente: " << endl;
			cout << diferente <<  endl;
			cout << "----------------- " << endl;
			cout << "Iguales: " << endl;
			for(int i=0;i<f;i++)
			{
				cout << iguales[i] << endl;
			}
		}	
		system("pause");
		return 0;	
	}
		
	
