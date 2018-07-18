#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vec_of_int;
	int i;
	// Input;
	while(cin >> i)	vec_of_int.push_back(i);
	cout << "[Inputs]:" << endl;
	for(auto i : vec_of_int)	cout << i << endl;
	cout << endl;
	// sort();
	sort(vec_of_int.begin(), vec_of_int.end());
	cout << "[Sorted]:" << endl;
	for(auto i : vec_of_int)	cout << i << endl;
	cout << endl;
	// unique();
	auto unique_iter = unique(vec_of_int.begin(), vec_of_int.end());
	cout << "[Unique arranged]:" << endl;
	for(auto i : vec_of_int)	cout << i << endl;
	cout << endl;
	// erase();
	vec_of_int.erase(unique_iter, vec_of_int.end());
	cout << "[Erased]:" << endl;
	for(auto i : vec_of_int)	cout << i << endl;
	cout << endl;
	return 0;
}