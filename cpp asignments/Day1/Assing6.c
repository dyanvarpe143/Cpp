#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
void main()
{

	int x=5;
	int y=8;
	printf("Before swap:\t %d \t %d \n",x,y);
	swap(&x,&y);
	printf("After swap:\t %d \t %d \n",x,y);
}