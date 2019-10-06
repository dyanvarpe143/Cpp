/*4) create a class.accept from user, how many instances are required.Accordingly create array of instances dynamically.
Now make sure that u call destructor for each and every instances.*/
#include<iostream>
#include<conio.h>
using namespace std;
class MyClass1
{
private:
	
public:
	int age;
	char name[20];
void fun()
   {
		
    }

	MyClass1()
	{
		this->age=age;
		this->name[20]=name[20];
		cout<<"Enter age and name:"<<endl;
		cin>>age>>name;

		cout<<age<<name;

	}
};
int main()
{
	
	int rec;
	cout<<"Enter number of records you want:";
	cin>>rec;

	MyClass1 *m1;
	m1=new MyClass1[rec];
	
	for(int i=0;i<=rec;i++)
	{
		cin>>m1[i].age;
		cin>>m1[i].name;
		cout<<m1[i].age<<"\t"<<m1[i].name;
	}
	getch();
}