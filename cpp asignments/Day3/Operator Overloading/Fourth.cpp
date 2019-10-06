#include<iostream>
using namespace std;
class Abc
{
private:
	int num;
public:
	Abc()
	{
		cout << "abc"<<endl;
	}
	void disp1()
	{
		cout << "from disp1:" << endl;
	}
	void disp2()
	{
		disp1();
		cout << "from disp2:" << endl;
	}
};
void main()
{
	Abc a;
		a.disp2();
}