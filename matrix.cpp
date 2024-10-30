#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*
 Crear los códigos correspondiente a un programa, que:
 Crea una tabla bidimensional de longitud 5x15 y nombre ‘marco’.
 Carga la tabla con dos únicos valores 0 y 1, donde el valor uno ocupará las
posiciones o elementos que delimitan la tabla, es decir, las más externas, mientras
que el resto de los elementos contendrán el valor 0.
 111111111111111
 100000000000001
 100000000000001
 100000000000001
 111111111111111
Visualiza el contenido de la matriz en pantalla.
*/
int main()
	{
		cout << "Cuadro" << endl;
		bool marco[15][5]; //[x][y]
		
		for(int i = 0; i < 5; i++) // y
		{
				for(int e = 0; e < 15; e++) //x
			{
				//true
				 if(i==0|| e==0 || i==4 || e==14)
				 {
				 	marco[i][e] = true;
				 }
				 else // false
				 {
				 	marco[i][e] = false;
				 }
				 cout << marco[i][e];
			}
			cout << endl;	
		}
			
		system("pause");
		return 0;
	}
