#include<iostream>
using namespace std;
class parent
{
public:
   void disp1() {
		cout << "disp1"<<endl;
	}
	void disp2()
	{
		cout << "disp2" << endl;
	}
	 void disp3()
	{
		cout << "disp3"<<endl;
	}
	void disp4()
	{
		cout << "disp4" << endl;
	}
};
class sub :private parent
{
public:
	sub()
	{

	}
	sub(int k)
	{

	}
	parent::disp3;
	parent::disp1;
	void disp5()
	{

		cout << "disp5" << endl;
		//parent::disp3();
	}
	

};
void main()
{

	//ake sure u can do the following

	sub s(30);
	//parent *p=(sub*)p;
	//sub *s1 = &p;
		
	s.disp5();
	//s1->parent::disp3();// parent::disp3();
	s.disp3();
    s.disp1();
}