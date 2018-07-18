#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vec_of_int {1,1,1,3,3,3,5,3,6,4,3,2,7,2,3,3,2,4,1,1};
	list<int> list_of_int;

	sort(vec_of_int.begin(), vec_of_int.end());

	unique_copy(vec_of_int.begin(), vec_of_int.end(), back_inserter(list_of_int));

	for(auto i : list_of_int)	{cout << i << " ";}

}