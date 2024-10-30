#include <iostream>
using namespace std;
//autor Negel diaz marine 2020-0512

int main()
{
	int x,z,y;
	for(x; x <= 10;x++)
	{
		cout << "for cout >> " << x << endl;	
	}
	while(z < 10)
	{
		cout << "while cout >> " << z << endl;
		z++;
	}

	do 
	{
		cout << "do while cout >> " << y << endl;
		y++;
	}
	while(y < 10);
	
	cout << "" << endl;
	system("pause");
	return 0;
}
