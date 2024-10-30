#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
1- Realice un programa en c++ donde se Ingresen los datos de 3 estudiantes, 
específicamente: Nombre, Apellido, Edad y Matricula y los imprima en pantalla
*/
int main()
	{
		cout << "Id Estudiantil" << endl;
		string nombre[3], apellido[3];
		int edad[3], matricula[3];
		
		cout << "A continuacion ingreses los datos que se le pide" << endl;
		for(int i = 0; i < 3 ; i++)	
		{
			cout << "Introdusca el nombre numero " << i+1 << endl;
			cin >> nombre[i];
			cout << "Introdusca el apellido numero " << i+1 << endl;
			cin >> apellido[i];
			cout << "Introdusca la matricula del estudiante numero " << i+1 << endl;
			cin >> matricula[i];
			cout << "Introdusca la edad del estudiante numero " << i+1 << endl;
			cin >> edad[i];		
		}	
		
		for(int e = 0; e < 3 ; e++)	
		{
			cout << "" << endl;
			cout << "Estudiante: " << e+1 << endl;	
			cout << "---------------" << endl;
			cout << "Nombre: " << nombre[e] << " Apellido : " << apellido[e] << endl;
			cout << "Edad: " << edad[e] <<endl;
			cout << "Matricula: " << matricula[e] << endl;
		}	
		system("pause");
		return 0;
	}
