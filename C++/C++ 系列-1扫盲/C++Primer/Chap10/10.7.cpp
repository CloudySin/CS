#include <list>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	// (a);
	vector<int> vec;
	list<int> lst;
	int i;
	while(cin >> i)
		lst.push_back(i);
	copy(lst.cbegin(), lst.cend(), back_inserter(vec));

	// (b);
	vector<int> vec2;
	// 1
	vec2.resize(10);
	fill_n(vec.begin(), 10, 0);
	// 2
	vec2.reserve(10);
	fill_n(back_inserter(vec2), 10, 0);


	return 0;
}