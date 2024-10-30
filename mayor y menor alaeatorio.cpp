#include <iostream>
#include <cstdlib>
using namespace std;
//autor negel diaz marine 2020-0512
/*
Hacer un programa que inicialice un vector de números con valores aleatorios, y posterior
ordene los elementos de menor a mayor.
*/
int main()
	{
		cout << "Mayor y menor" << endl;
		int vector[5];
		int menor;
		for(int i = 0; i < 5; i++)
		{
			vector[i] = 1 + (rand() % 1000);
		}
		cout << "valor sin ordenar" << endl;
			for(int i = 0; i < 5; i++)
		{
			cout  << "valor "<< i+1 << ": " << vector[i] << endl;
		
		}
		
		
		
    for (int x = 0; x < 5; x++) {
        for (int i = 0; i < 5-x-1; i++) {
            if(vector[i] < vector[i+1]){
                int tmp = vector[i+1];
                vector[i+1] = vector[i];
                vector[i] = tmp;
            }
        }
    }
    		int z= 0;
    		cout << "valor ordenado" << endl;
    			for(int i = 4; i > -1; i--)
		{
			cout  << "valor "<< z+1 << ": " << vector[i] << endl;
			z++;
		}
		
		system("pause");
		return 0;
	}
