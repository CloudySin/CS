#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	list<string> more_sth;
	cout << "Please input things: " << endl;
	
	for(string sth_; cin >> sth_; more_sth.push_back(sth_));	
	for (auto i = more_sth.begin(); i != more_sth.end(); ++i)
	{
		cout << *i << endl;
	}
	return 0;
}