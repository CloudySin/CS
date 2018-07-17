#include <list>
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vec_int{12,1,3,75,3,2,4,2,321,3,2,1,2,3,3,21,};
	list<int> list_int{12,123,27,56,9,5,543,34,67,56,433,245,43,12};

	vector<double> vec_double_1(vec_int.begin(),vec_int.end());
	for(auto i : vec_double_1)
	{
		cout << i << endl;
	}

	cout << endl;

	vector<double> vec_double_2(list_int.begin(), list_int.end());
	for(auto i : vec_double_2)
	{
		cout << i << endl;
	}

	cout << endl;

	return 0;
}