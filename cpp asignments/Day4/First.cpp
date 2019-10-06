#include<iostream>
using namespace std;
class Minute;
class Hour
{
private:
	int hr;
public:
	Hour(int hr)
	{
		this->hr = hr;
	} 
	void disp()
	{
		
		cout << "Hour:" << hr << endl;
	}
	void operator=(Minute &ref2);
};
class Minute
{
private:
	int mnt;
public:
	Minute(int mnt)
	{
		this->mnt = mnt;
		
	}//parameterized constructor
	void disp()
	{
		cout << "minutes:" << mnt << endl;
	}//disp method
	int getMnt()
	{
		return mnt;
	}
	
};
void Hour:: operator=( Minute &ref2)
{
	this->hr= ref2.getMnt()/ 60;
}
void main()
{
	Hour h(1);
	Minute m(240);
	h = m;
	h.disp();
}
