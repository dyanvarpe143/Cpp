#include<iostream>
using namespace std;
class course
{
public :
	course()
	{

	}
	virtual void fees()
	{
		cout << "course fess" << endl;
	}
	//here
};
class DacCourse :public course
{public :
	DacCourse()
	{

	}
	void fees()
	{
		cout << "Dac fess" << endl;
	}
	// here
};

//you should be able to say following
void main()
{
	course *c = new course;
	c->fees(); // course version should be called
	c = new DacCourse;
	c->fees();  // DacCourse version should be called
}