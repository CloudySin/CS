#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

istream& fun(istream & x)
{
	string sth;
	while(x >> sth)
	{
		cout << sth << endl;
	}
	return x;
}

int main(int argc, char const *argv[])
{
	istringstream sth("12345t");
	fun(sth);
	return 0;
}