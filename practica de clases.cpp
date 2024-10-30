#include <iostream>
#include <string>
using namespace std;

class mclass
{
	public:
	void nuname(string x)
	{
	name = x;
	}	
	
	void ssp()
	{
	 cout << name << endl;	
	}
	
	private:
	string name;
};

int main()
{
	mclass p20;
	p20.nuname("fuego");
	p20.ssp();
	system("pause");
	return 0;
}
