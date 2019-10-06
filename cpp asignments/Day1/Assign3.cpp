/*3) create a structure "Employee" with members 
	int id,char name[20],char desig[20] now access it using a) array b) DMA*/
#include<iostream>
using namespace std;
#include<conio.h>
struct Employee
{
	int id;
	char name[20];
	char desig[20];

};
void main()
{

	/*Employee e[3];
	for(int i=0;i<3;i++)
	{                                                             1.a:array
		cout<<"enter id:\t";
		cin>>e[i].id;
		cout<<"enter name:\t";
		cin>>e[i].name;
		cout<<"enter designation:\t";
		cin>>e[i].desig;
		
	}
	for(int i=0;i<3;i++)
	{
	cout<<e[i].id<<e[i].name<<e[i].desig;		
	}*/
	Employee *e;
	int rec;
	cout<<"how many records:";
	cin>>rec;
	e=new Employee[rec];
	for(int i=0;i<rec;i++)
	{
		
		cin>>e[i].id;                                            //2.DMA
		
		cin>>e[i].name;
		
		cin>>e[i].desig;

     cout<<e[i].id<<"\t"<<e[i].name<<"\t"<<e[i].desig;
	}
	/*for(int i=0;i<3;i++)
	{
			
	}*/
	_getch();
	
	
}