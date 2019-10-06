/*6) 
Developer Side
	create a class "book" with
		int bookid
		char *bookname
		int price

	define parameterized constructor only for this class.
	define 3 getter functions.

create necessary header and lib file and distribute it to the client.

Client Side

	 create 2 instances
	1 on stack and 1 on heap.
	pass the necessary values while creating instances.
	call the getter functions.
*/
#include<iostream>
#include "Header.h"
using namespace std;
Car::Car(char *ptr)
{
	name=new char[strlen(ptr)+1];
	speed=0;
}
void Car::startEngine()
{
	cout<<"Engine started"<<endl;
}
void Car::stopEngine()
{
	cout<<"Engine stopped"<<endl;
}
void Car::applyBreak()
{
	cout<<"break applied"<<endl;
}
void Car::applyClutch()
{
	cout<<"clutch applied"<<endl;
}
void Car::accelerate(int speed)
{
	this->speed=speed;
}
void Car::start()
{
	startEngine();
	cout<<"Car started"<<endl;
}
void Car::stop()
{
	stopEngine();
	cout<<"Car Stopped"<<endl;
}
Car::~Car()
{
	delete []name;
}
