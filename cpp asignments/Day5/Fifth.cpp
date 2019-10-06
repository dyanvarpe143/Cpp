/*Define a class “MyNum” having a member variable “int num” and “void disp()”;
From main function, perform following
a) MyNum m1(20);						b) m1 = 100; //Do not use Constructor for this purpose			
c) int k;
d) k = m1;
e) cout << endl << k << endl;*/
#include<iostream>
using namespace std;
class MyNum
{
private:
	int num;
public:
	MyNum(int num)
	{
		this->num = num;
	}
	void disp()
	{
		cout << "disp"<<num << endl;
	}
	operator int()
	{
		return num;
	}
	MyNum& operator=(int k)
	{
		num = k;
		return *this;
	}
};
void main()
{
	MyNum m1(20);
	m1 = 100; //Do not use Constructor for this purpose			
	 int k;
	 k = m1;
	cout << endl << k << endl;
	//m1.disp();
}