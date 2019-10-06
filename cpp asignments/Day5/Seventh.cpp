/*Create a base class “Subject”.Declare pure virtual function “void maxmarks()” in it.
Define following sub classes for this class.A) Maths b) History c) English.Define “maxmarks” in these classes.
now write a global function "show" which will accept "subject class pointer" as an argument. 
this function should be able to call "maxmarks()" of any child class which is passed.
From main function try to call this function by passing various child classes.*/
#include<iostream>
using namespace std;
class Subject
{
private:
	int marks;
public:
	Subject()
	{

	}
	Subject(int marks)
	{
		this->marks = marks;
	}
	virtual void maxmarks() = 0;
};
class Maths :public Subject
{
private:
	int marks;
public:
	Maths()
	{

	}
	Maths(int marks)
	{
		this->marks = marks;
	}
	void maxmarks()
	{
		cout << "Maths Mrks:" << marks << endl;
	}

};
class History :public Subject
{
private:
	int marks;
public:
	History()
	{

	}
	History(int marks)
	{
		this->marks = marks;
	}
	void maxmarks()
	{
		cout << "History Mrks:" << marks << endl;
	}
};
class English :public Subject
{
private:
	int marks;
public:
	English()
	{

	}
	English(int marks)
	{
		this->marks = marks;
	}
	void maxmarks()
	{
		cout << "English Mrks:" << marks << endl;
	}
};
void show(Subject *p)
{
	
		if (typeid(*p) == typeid(Maths))
		{
			Maths *m = (Maths*)p;
			m->maxmarks();
		}
		if (typeid(*p) == typeid(History))                    /*to call "maxmarks()" of any child class which is passed*/
		{
			History *h = (History*)p;
			h->maxmarks();
		}
		if (typeid(*p) == typeid(English))
		{
			English *e = (English*)p;
			e->maxmarks();
		}
}
void main()
{
	Subject *p[3] = {new Maths(75),new History(80),new English(55)};
	for (int i = 0; i < 3; i++)
	{
						              //   From main function try to call this function by passing various child classes.*/
		show(p[i]);
	}

	/*show(new Maths(75));
	show(new English(55));           //
	show(new History(60));*/     
}