/*Create a base class FourWheeler.Declare pure virtual function �void start()� in it.
Define following sub classes for this class.A) Qualis b) Sumo c) Volvo Define �start� function in these classes.
In main function, create array of pointer to FourWheeler which will contain objects of these three sub classes.
Now traverse the array and call all the child class methods.*/
#include<iostream>
using namespace std;
class FourWheeler
{
public:
	virtual void start() = 0;
	FourWheeler()
	{
		///cout << "FourWheeler base" << endl;
	}
};
class Qualis :public FourWheeler
{

public:
	Qualis()
	{

	}
	void start()
	{
		cout << "Qualis Start" << endl;
	}
};
class Sumo :public FourWheeler
{
public:
	Sumo()
	{

	}
	void start()
	{
		cout << "Sumo Start" << endl;
	}
};
class Volvo :public FourWheeler
{
public:
	Volvo()
	{

	}
	void start()
	{
		cout << "Volvo Start" << endl;
	}
};
void main()
{
	FourWheeler *arr[3] = { new Qualis,new Sumo,new Volvo };
	for (int i = 0; i < 3; i++)
	{
		arr[i]->start();
	}
}