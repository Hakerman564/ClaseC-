#include <iostream>
using namespace std;
int main()
{
	// tabla de una dimension
	int numerospares[4] = {2,4,6,8};
	cout << numerospares[1];
	cout << "" << endl;
	
	//tabla de dos dimensiones
	int cuadrado[2][2] = 
	{
	10 , 20 ,
	30 , 50 };
	cout << cuadrado[1][0] << endl;
	
	//tabla de 3 dimenciones
	int tabla[10][30][40];
	
	system("pause");
}
