/*3)create a class "MyClass1"with members and member function "disp1().create another class 
"MyClass2"with members and member function "disp2().now try to invoke disp1() from disp2()in the main() function,
create instances of both the classes and invoke their member functions.*/
#include<iostream>
#include<conio.h>
using namespace std;
class MyClass1
{
private:
	 int num;

public:

	void disp1()
	{
		cout<<"disp1 from myclass1"<<endl;
	}

	MyClass1(int a,int b)
	{
		cout<<"This is default condtructor: "<<endl;
	}
	/*MyClass1(MyClass1 &ref)
	 {
		 num=ref.num;
		 cout<<"This is a param constructor"<<num;
	 }*/
	~MyClass1()
	{
		cout<<"destructor deaalocate :"<<num<<endl;
	}
};
class MyClass2
{
public:

	void disp2(MyClass1 &ref)
	{
		cout<<"before accesing from disp1:"<<endl;
		ref.disp1();
	}

};

int main()
{

	MyClass1 m1(10,10);
	MyClass1 m();
	MyClass2 m2;
	MyClass1 *m3=new MyClass1(11,15);
	
	m2.disp2(m1);
	m1.disp1();
	delete m3;
//	m2.disp2(m1);
	
}

