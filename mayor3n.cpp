#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
//Realiza una aplicación que pida 3 números y los muestre en pantalla de menor a mayor.
int main()
	{
		cout << "Ordenador de numero menor a mayor" << endl;
		int a,b,c,n1,n2,n3;
		cout << "Numero 1" << endl;
		cin >> a;
		cout << "Numero 2" << endl;
		cin >> b;
		cout << "Numero 3" << endl;
		cin >> c;
		
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
		system("pause");
		return 0;
	}
