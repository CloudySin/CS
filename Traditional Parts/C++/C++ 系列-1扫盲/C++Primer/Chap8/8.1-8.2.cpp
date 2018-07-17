#include <iostream>
#include <string>

using namespace std;

istream& fun(istream & x)
{
	string sth;
	while(x >> sth)
	{
		cout << sth << endl;
	}
	x.clear();
	return x;
}

int main(int argc, char const *argv[])
{
	istream& asd = fun(cin);
	cout << asd.rdstate() << endl;
	return 0;
}