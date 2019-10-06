#include<iostream>
using namespace std;
class Number
{
private:
	int num;
public:
	Number(int num)
	{
		this->num = num;
	}
	void disp()
	{
		cout << "Number:" << num << endl;
	}
	Number operator-()
	{
		return Number(-num);
	}
	operator int()
	{
		return num;
	}
	Number operator+=(int k)
	{

		num += k;
		return *this;
	}
};
int main()
{
	Number n1(20);
	int k = -n1;
	//n1.disp();
	cout << k;
	n1 += 5;
	n1.disp();
	Number n2(35);
	if (n1 != n2)
	{
		cout << "n1 is not equals to n2:"<<endl;
	}
	Number n3(12);

	if (n3 < n1)
	{
		cout << "n3 is greater than n1"<<endl;
	}
	Number n4(10);

	n4 = n2*n3;
	n4.disp();


}