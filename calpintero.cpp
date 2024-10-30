#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*

*/

void menu();
int main()
	{
		cout << "menu insert 0 nada o 1 menu" << endl;
		int a;
		cin >> a;
		
		if(a == 0)
		{
			cout << "no se hizo nada" << endl;
		}
		else
		{
			menu();	
		}
	
		system("pause");
		return 0;
	}
	
void menu()
{
	cout << "MENU 1" << endl;
	cout << "MENU 2" << endl;
	cout << "MENU 3" << endl;	
}
