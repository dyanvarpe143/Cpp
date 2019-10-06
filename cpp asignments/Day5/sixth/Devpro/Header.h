class base1
{

public:
	base1();
	void disp();

};
class base2
{
public:
	base2();
	void disp1();
};
class child :public base1, public base2
{
public:
	child();
	void disp2();
};
