#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size() < sz;
}

int main(int argc, char const *argv[])
{
	vector<int> vec_of_int{2,1,21,23,1,2,31,23,41,234,1,23,423,2,3};
	string word{"12345678912345675432112342"};
	auto sth = find_if(vec_of_int.begin(), vec_of_int.end(), bind(check_size, word, _1));
	if(sth != vec_of_int.end())	{cout << *sth << endl;}
	else	{cout << "None................" << endl;}
	return 0;
}