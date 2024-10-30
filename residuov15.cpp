#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
int main() //division con residuo con numeros enteros
{
	//declaracion de variable
	int num1, num2, consiente, residuo;
	cout << "vamos a dividir" << endl;
	cout << "introdusca  recuerda solo numeros enteros" << endl;
	//introduciion de variable
	cout << "introdusca el dividendo" << endl;
	cin >> num1;
	cout << "introdusca el divisor" << endl;
	cin >> num2;
	//proceso
	 residuo = num1 % num2;
	 consiente = num1 / num2;  
	 //salida
	 cout << " " << num1 << endl;
	 cout << "-----------" << "  =  " << consiente << "   [resudio de -->" << residuo  << "]"<<endl;
	 cout << " " << num2 << endl;
	system("pause");
	return 0;	
}

