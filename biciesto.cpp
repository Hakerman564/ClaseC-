#include <iostream>
using namespace std;

int main()
{
	cout << "año bisiesto" <<endl ;
	int a;
	float b;
	cout << "Introduce un año" <<endl ;
	cin >> a;
	 b = a%4;
	 if(b == 0)
	 {
	 	cout << "Es año bisiesto" <<endl ;	
	 }
	 
	 else
	 {
	 	cout << "no es año bisiesto" <<endl ;
	 }
	system("pause");
	return 0;	
}
