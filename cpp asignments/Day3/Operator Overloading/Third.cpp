#include<iostream>
using namespace std;
class Module2;
class Module1
{
	int duration1;
public:
	Module1(int k)
	{
		duration1 = k;
	}
	friend void check(Module1 &, Module2 &);
};

class Module2
{
	int duration;
public:
	Module2(int k)
	{
		duration = k;
	}
	friend void check(Module1 &, Module2 &);
};
void check(Module1 &m1, Module2 &m2)
{
	if (m1.duration1 == m2.duration)
	{
		cout << "are equal"<<endl;
	}
	else
	{
		cout << "not equal"<<endl;
	}
}
int main()
{
	Module1 s1(10);
	Module2 s2(10);
	check(s1,s2);
}
/*write a global function "check" which will take 2 modules(i.e.Module1 and Module2) and check whether Modules are same or not.
call this "check" function from main function.*/
