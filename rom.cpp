#include <iostream>
using namespace std;


void escribir(string a,int v = 0)
{
	cout << a; 
	if (v == 1)
	{
	cout << endl;
	}
}

void escribir(int a,int v = 0)
{
	cout << a;
	if(v == 1) 
	{
	cout << endl;	
	}
}

int main()
{
   escribir("Hola",1);
	system("pause");
}
