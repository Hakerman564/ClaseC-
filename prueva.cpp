#include <iostream>
using namespace std;
//autor negel diaz marine 2020-0512
/*

*/

struct coco
{
char r[10];	
};

int main()
	{
		struct coco poco[2];
		cout << "" << endl;
		
		poco[0].r[0] = 'rio';
		poco[1].r[0] = 'c';  
		cout << poco[0].r << poco[0].r;
		system("pause");
		return 0;
	}
