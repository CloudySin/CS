#include <iostream>
#include <string>

using namespace std;

class numbered
{
public:
	numbered(){	mysn = seq++;}
	numbered(numbered &n){	mysn = seq++;}
	int mysn;
	static int seq;
};

int numbered::seq = 10;

void f1(numbered s){cout << s.mysn << endl;}
void f2(const numbered &s){cout << s.mysn << endl;}

int main(int argc, char const *argv[])
{
	numbered a, b=a, c=b;
	f1(a); f1(b); f1(c);
	f2(a); f2(b); f2(c);
	return 0;
}