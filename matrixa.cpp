#include <iostream>
#include <cstdlib>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Diseñar un programa, que:
? Crea una tabla bidimensional de longitud 5x5 y nombre ‘matriz’.
? Carga la tabla con valores numéricos enteros.
? Suma todos los elementos de cada fila y todos los elementos de cada columna
visualizando los resultados en pantalla. 
*/
int main()
	{
		cout << "MATRIX" << endl;
		int matrix[5][5];// filas x columnas y [x][y]
		for(int i = 0; i < 5; i++)
		{
			for(int e = 0; e < 5; e++)
			{
				matrix[i][e] = (rand() % 100)+1;
			printf("%3d ",matrix[i][e])	;
			cout << " ";
			}	
			cout << endl;
		}
		
		cout << "fila 1: " << matrix[0][0]+matrix[0][1]+matrix[0][2]+matrix[0][3]+matrix[0][4] << endl;
		cout << "fila 2: " << matrix[1][0]+matrix[1][1]+matrix[1][2]+matrix[1][3]+matrix[1][4] << endl;
		cout << "fila 3: " << matrix[2][0]+matrix[2][1]+matrix[2][2]+matrix[2][3]+matrix[2][4] << endl;
		cout << "fila 4: " << matrix[3][0]+matrix[3][1]+matrix[3][2]+matrix[3][3]+matrix[3][4] << endl;
		cout << "fila 5: " << matrix[4][0]+matrix[4][1]+matrix[4][2]+matrix[4][3]+matrix[4][4] << endl;
		
		cout << "Columna 1: " << matrix[0][0]+matrix[1][0]+matrix[2][0]+matrix[3][0]+matrix[4][0] << endl;
		cout << "Columna 2: " << matrix[0][1]+matrix[1][1]+matrix[2][1]+matrix[3][1]+matrix[4][1] << endl;
		cout << "Columna 3: " << matrix[0][2]+matrix[1][2]+matrix[2][2]+matrix[3][2]+matrix[4][2] << endl;
		cout << "Columna 4: " << matrix[0][3]+matrix[1][3]+matrix[2][3]+matrix[3][3]+matrix[4][3] << endl;
		cout << "Columna 5: " << matrix[0][4]+matrix[1][4]+matrix[2][4]+matrix[3][4]+matrix[4][4] << endl;
		
		system("pause");
		return 0;
	}
