#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	cout << "convertidor de notacion de horas conversion 24 -> 12" << endl;
	char hora[5];
	string x,y,time;
	int a,b;
	
	cin >> hora;
	x = (hora[0]);
	y = (hora[1]);
	x += y;
	a = atoi(x.c_str());
	cout << a << endl;
	
	
		if(a>11)
	{
		time = "PM";	
	}
	else
	{
		time ="AM";
	}
	
	if(a>12)
	{
	 a = a -12;	
	}
		
	if(a==0)
	{
	 a = a + 12;
	}
	
	
	cout << "El resultado en notacion de 12  = " << a << ":" << hora[3] << hora[4] << " " << time <<  endl;
	
	system("pause");
	return 0;
}
