#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
using namespace std;

int mal ()
{
	srand(time(NULL));
	int x,z,res;
	x = rand()%100;
	z = rand()%100;
	res = x * z;
	return res;
}

int main()
{
 for (int w = 3; w = 2; w++)
 	{
 	int mensaje = mal();	
	cout << mensaje << endl;
	sleep(1);		
	}	
system("pause");
}
