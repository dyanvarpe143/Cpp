#include <iostream>
using namespace std;

class Number
{
private:

	int num;
public:
	Number() {
		num = 0;
	}
	Number(int n) {
		num = n;
	}
	friend Number operator-(Number &, Number &);
	friend Number operator*(Number &, Number &);
	friend Number operator/(Number &, Number &);
	void disp() {
		cout << num;
	}
};
Number operator-(Number& ref, Number& ref1) {
	return Number(ref.num - ref1.num);
}
Number operator*(Number& ref, Number& ref1) {
	return Number(ref.num * ref1.num);
}
Number operator/(Number& ref, Number& ref1) {
	return Number(ref.num / ref1.num);
}


int main() {

	Number n1(8), n2(4), n3(20), n4(6), n5;
	n5 = n1 - n2*n3 / n4;
	n5.disp();
	return 0;
}
