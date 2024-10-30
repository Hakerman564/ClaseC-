#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Multiplicación de 2 números sin retorno de valor
*/
void por();

int main()
	{
		cout << "Multiplicador" << endl;
		por();
		system("pause");
		return 0;
	}
	
void por()
{
	int x,y;
	cout << "introdusca 2 numeros" << endl;
	cin >>x>>y;
	cout << "El resultado es -> " << x*y <<  endl; 	
}
