#include<iostream>
using namespace std;
class sample
{
private:
	char *name;
public:
	sample(char *ch)
	{
	name=new char[strlen(ch)+1];
	cout<<strcpy(name, ch);
	}
	

	friend void disp(sample &);
	friend ostream& operator<<(ostream &o, sample &s);
};
ostream& operator<<(ostream &o, sample &s)
{
	return (o << s.name<<endl);
}
void disp(sample &s)
{
	char *ptr;
	ptr = new char[strlen(s.name) + 1];
	cout<<strcpy(ptr, s.name);
}
void main()
{
	sample s("hello");
   disp(s);
	//cout<<s;
	
	
}