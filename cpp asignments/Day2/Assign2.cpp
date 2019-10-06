/*2) create a class with constructors and destructor.
create 2 instances on stack and 1 instance on heap. observe the invocation of constructors and destructors.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class MyClass1
{
private:
	int num;

public:

	MyClass1()
	{
		cout<<"This is from constructor "<<endl;
		//this->num=num;

	}

	MyClass1(int num)
	{
		cout<<"This is from param constructor "<<endl;
		this->num=num;

	}
	~MyClass1()
	{
		cout<<"destructor :::::::"<<endl;
	}
};
int main()
{
 MyClass1 m[2];
 MyClass1 *m1=new MyClass1();
 //delete m1;
}
