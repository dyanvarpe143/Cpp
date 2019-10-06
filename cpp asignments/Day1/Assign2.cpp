#include<iostream>
#include<conio.h>
using namespace std;
struct book
{
	char name[30];
	char bid[5];
	int price;
};
void main()
{
	book *ptr;
	int rec;
	cout<<"How many records wants to create:";
	cin>>rec;
	ptr=new book[rec];
	for(int i=0;i<rec;i++)
	{
		//cin>>ptr[i].name>>"\t">>ptr[i].bid>>"\t">>ptr[i].price ;
		cin>>ptr[i].bid;
		cin>>ptr[i].name;
		cin>>ptr[i].price;
		cout<<ptr[i].name<<"\t"<<ptr[i].bid<<"\t"<<ptr[i].price;
	}

	/*for(int i=0;i<=3;i++)
	{
		
	}*/
	_getch();

}
