#include<iostream>
using namespace std;
class base
{
private:
	char *ptr;
	int num;
	double num1;
public:
	base()
	{

	}
	base(char *ptr,double num1)
	{
		this->ptr = new char[strlen(ptr + 1)];
		this->num1 = num1;
	}
	base(int num)
	{
		this->num = num;
	}
	virtual void disp()
	{
		cout << num <<endl<< num1 << endl;
	}
};
class sub :public base
{
private:
	char a;
	int num;
	double num1;
public :
	sub()
	{

	}
	sub(int num)
	{
		this->num = num;
	}
	sub(char a, double num1)
	{
		this->a = a;
		this->num1 = num1;
		cout <<num1 <<endl<< a << endl;
	}
	void disp()
	{
		
	}
};

//Following statements should be possible
void main()
{

	sub s;

	sub *s1 = new sub(40);
	//s1->disp();

	sub *s2 = new sub('a', 4.5);
	//s2->disp();
	//cout << s1 << endl << s2 << endl;

}