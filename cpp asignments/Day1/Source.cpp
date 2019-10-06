#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	//char *ptr;
	int num=10;
	int *ptr=&num;
	/*cout<<"Enter No of initial:"<<endl;
	cin>>rect;
	ptr=new char [rect+1];*/
	cout<<++*ptr<<endl;
	//ptr++;
	//cin>>ptr;
	/*for(int i=0;i<rect;i++)
	{
	cout<<ptr;

	}*/
	_getch();

}