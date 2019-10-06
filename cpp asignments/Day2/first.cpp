/*1) create a class with constructors and destructors.create array of instances and observe how program behaves.*/
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
 MyClass1 m[3];
}
