/*5) create a class, define different types of constructors.
in main create n number of objects. At the end display how many constructors are created for a class.*/
#include<iostream>
#include<conio.h>
using namespace std;
int cnt=0;
class MyClass
{
private:
	int  num;
public:
	MyClass()
	{
		cout<<"Default constructor:: "<<endl;
		cnt++;
	}
	MyClass(MyClass &ref)
	{
		num=ref.num;
		cout<<"copy constructor::"<<num<<endl;
		cnt++;
	}

	MyClass(int a,int b)
	{
	  cout<<"param 2 int "<<endl ; 
	  cnt++;
	}

};
int main()
{
	
	MyClass m[10];
	MyClass m1(10,10);
	//MyClass *m2=new MyClass(m1);
	MyClass m3=m1;
	cout<<"count of constructor:"<<cnt;
}