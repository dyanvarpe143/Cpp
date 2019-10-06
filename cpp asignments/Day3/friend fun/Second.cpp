#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
#include<string>
using namespace std;
class First
{
private:

	int a;
public:
	First(int a)
	{
		this->a = a;
		cout << "first"<<a<<endl;
	}
	friend class Second;
};
class Second
{
public:
	void fun1(First &f1)
	{
		cout << f1.a << endl;
	}
	void fun2(First &f1)
	{
		cout << f1.a << endl;
	}
	void fun3(First &f1)
	{
		cout << f1.a << endl;
	}
};
int main()
{
	First f(120);
	Second s;
	s.fun1(f);
	s.fun2(f);
	s.fun3(f);
}