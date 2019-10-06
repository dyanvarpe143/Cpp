#include<iostream>
using namespace std;
class Number
{
private:
		int num;
public:

		Number()
		{
			num = 0;//cout<< "Defualt:"<<endl;
		}
		Number(int num)
		{
			this->num = num;
		}
		void disp()
		{
			cout <<"Number:"<<num<<endl;
		}
		//friend Number operator - (Number &);
		

		
		friend Number operator-(Number &, Number &);
		friend Number operator+(Number &, Number &);
		friend Number operator*(Number &, Number &);
		friend Number operator/(Number &, Number &);
};
Number operator-(Number &n, Number &m)
{
	
	return Number(n.num - m.num);
}
Number operator+(Number &n, Number &m)
{
	return Number(n.num + m.num);
}

Number operator/(Number &n, Number &m)
{
	return Number(n.num / m.num);
}

Number operator*(Number &n, Number &m)
{
	return Number(n.num * m.num);
}

void main()
{
	Number n1(8), n2(4), n3(20), n4(6), n5;
	n5 = n1 - n2*n3 / n4;
	n5.disp();
	
}