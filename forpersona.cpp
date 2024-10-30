#include <iostream>
using namespace std;

//autor: negel eduardo diaz marine

int main() //verificador de sexo y promedio de peso
{
	//declaracion de variable
	float pesoprof, pesoprom,acumuladorf,acumuladorm;
	char personasexo[5];
	int personapeso[5];
	//introduccion de variable
	for(int x = 0; x < 5;x++)
	{
	 cout << "Introduce el sexo de la persona (f/m)" << endl;
	 cin >> personasexo[x];
	  cout << "Introduce el peso de la persona (expresados en Kg) " << endl;
	 cin >> personapeso[x];
	}
	
	//procesos
		for(int z = 0; z < 5;z++)
	{
		if (personasexo[z] == 'f')
		{
			acumuladorf = acumuladorf + 1;
			pesoprof = pesoprof + personapeso[z];
		}
		else
		{
			acumuladorm = acumuladorm + 1;
		    pesoprom = pesoprom + personapeso[z];

		}
		
	}
	if (acumuladorf == 0) pesoprof = pesoprof / 1;
	else pesoprof = pesoprof / acumuladorf;
	if (acumuladorm == 0) pesoprom = pesoprom / 1;
	else pesoprom = pesoprom / acumuladorm;
	//salida
	
	if(acumuladorf > acumuladorm)
	{
	 cout << "hombres " << acumuladorm << endl;
	 cout << "mujeres " << acumuladorf << endl;
	 cout << "Hay mas mujeres que hombres" << endl;
	}
	else
	{
	cout << "hombres" << acumuladorm << endl;
	 cout << "mujeres" << acumuladorf << endl;
	 cout << "Hay mas hombre que mujeres" << endl;
	}
	cout << "peso promedio de hombres: " << pesoprom << " Kg" << endl;
	cout << "peso promedio de mujeres: " << pesoprof << " Kg" << endl;
	
	system("pause");
}
