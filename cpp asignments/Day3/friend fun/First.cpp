#include<iostream>
using namespace std;
class Second;
class First
{
private:
		char str1[20];
public:
	First(char *ptr)
	{
		strcpy(str1, ptr);
		cout << "First String"<<endl;
	}
	friend void fun(First &, Second &);
};
class Second
{
private:
	char str2[20];
public:
	Second(char *ptr)
	{
		strcpy(str2, ptr);

	}
	friend void fun(First &, Second &);
};
void fun(First &ref, Second &ref1)
{
	//char ptr1[40];
	cout<<strcat(ref.str1, ref1.str2);

}

void main()
{
	First f1("Hello");
	Second f2("bye");
	fun(f1, f2);
}