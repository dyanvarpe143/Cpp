#include<iostream>
#include"Header.h"
using namespace std;
base1::base1()
{
	cout << "base1 default constructor:" << endl;
}
void base1::disp()
{
	cout << "base1 disp:" << endl;
}
base2::base2()
{
	cout << "base2 constructor:" << endl;
}
void base2::disp1()
{
	cout << "disp1 from base2"<<endl;
}
child::child()
{
	cout << "child constructor" << endl;
}
void child::disp2()
{
	cout << "disp2 from child"<<endl;
}