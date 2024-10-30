#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
int main()
{ // introducion de variable
	int nota;
	cout << "verificador de nota" << endl;
	
	// introduccion de variable
	cout << "introdusca su nota (1-10)" <<endl;
	cin >> nota;
	//esta switch evaluara que ta mal esta tu nota
	switch(nota)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			cout << "A reprovado" <<endl;
			break;
		case 4:
			cout << "no es buena nota" <<endl;
			break;
		case 5:
			cout << "casi lo logras estudia mas" <<endl;
			break;
		case 6:
			cout << "nota mediocre pero as pasado" <<endl;
			break;
		case 7:
		case 8:
			cout << "nota normal" <<endl;	
			break;
		case 9:
			cout << "nota sobresaliente" <<endl;
			break;
		case 10:
			cout << "su nota es perfecta" <<endl;
		default:
			cout << "nota invalida o datos no espesificos" <<endl;	
	}
	//fin
	system("pause");
	return 0;	
}

