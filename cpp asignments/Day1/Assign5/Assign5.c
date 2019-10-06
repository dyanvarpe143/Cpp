#include<stdio.h>
#include<conio.h>
int disp(int a)
{
	printf("Val %d:",a);
}
void main()

{
	int num=2;
	int (*ptr)(int);
	ptr=disp;
	printf(" number:%d",disp(num));
	//_getch();
}