#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
	sacar  el valor absoluto de un numero
*/
int absoluto(int x);
int main()
	{
		int u;
		cout << "Valor absoluto" << endl;
		cout << "introdusca un numero" << endl;
		cin >>u;
		absoluto(u);
		system("pause");
		return 0;
	}
	
int absoluto(int x)
{
	if(x < 0)
	{
		x = x*-1;	
	}
	
	cout << "Valor Absoluto -> " << x << endl;
}
