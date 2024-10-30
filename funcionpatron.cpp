#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*

*/
void cambiador(int x);
int main()
	{
		cout << "funciones punteros" << endl;
		int z = 3;
		cout << z << endl;
		cambiador(z);
		cout << z << endl;
		system("pause");
		return 0;
	}
	

void cambiador(int x)
{
	x = 5;
}
