#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct X
{
	X(){	cout << "构造函数X()" << endl;}
	X(const X&) {cout << "拷贝构造函数 X(const X&)" << endl;}
	X& operator= (const X &rhs){cout << "拷贝赋值运算符 =(const X&)" << endl; return *this;}
	~X(){	cout << "析构函数~X()" << endl;}
};

void f1(X x){ }
void f2(X &x){ }

int main(int argc, char const *argv[])
{
	cout << "Loacl variable: " << endl;
	X x;
	cout << endl;

	cout << "Nonreference pass parameters: " << endl;
	f1(x);
	cout << endl;

	cout << "Reference pass parameters: " << endl;
	f2(x);
	cout << endl;

	cout << "Dynamic allocating: " << endl;
	auto *p = new X;
	cout << endl;

	cout << "Adding to a container: " << endl;
	vector<X> vec;
	vec.push_back(x);
	cout << endl;

	cout << "Free dynamically allocated object: " << endl;
	delete p;
	cout << endl;

	cout << "Nondirect initialization and assignment: " << endl;
	X y = x;
	y = x;
	cout << endl;

	cout << "End the Program:" << endl;
	return 0;
}