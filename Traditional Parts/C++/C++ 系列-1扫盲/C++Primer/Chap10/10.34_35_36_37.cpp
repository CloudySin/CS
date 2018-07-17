#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
	// 10.34
	vector<int> vec{2,2523,423,437,6,2,32,32};
	for (auto i = vec.rbegin(); i != vec.rend(); ++i)
	{
		cout << *i << " ";	
	}
	cout << endl;

	// 10.35
	for(auto i : vec)	{cout << i << " ";}
	cout << endl;
	
	// 10.36
	list<int> list_of_int{3,50,13,23,4,234,23,42,34,235,234,23,412,4,123,0,23,5,3,2,34,23,423};
	auto target = find(list_of_int.crbegin(), list_of_int.crend(), 0);
	cout << distance(target, list_of_int.crend()) << endl;

	// 10.37
	vector<int> vec_ints{1,2,3,4,5,6,7,8,9,10};
	list<int> list_ints(8-3);
	copy(vec_ints.crbegin()+3, vec_ints.crend()-2, list_ints.begin());
	for(auto i : list_ints)	{cout << i << " ";}
}