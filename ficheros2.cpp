#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fichero("numeros.txt");
	while(!fichero.eof()) cout <<(char)fichero.get();
	cout << "" << endl;
	system("pause");
}
