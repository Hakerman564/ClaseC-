#include <iostream>
using namespace std;

int main()
{
	cout << "a�o bisiesto" <<endl ;
	int a;
	float b;
	cout << "Introduce un a�o" <<endl ;
	cin >> a;
	 b = a%4;
	 if(b == 0)
	 {
	 	cout << "Es a�o bisiesto" <<endl ;	
	 }
	 
	 else
	 {
	 	cout << "no es a�o bisiesto" <<endl ;
	 }
	system("pause");
	return 0;	
}
