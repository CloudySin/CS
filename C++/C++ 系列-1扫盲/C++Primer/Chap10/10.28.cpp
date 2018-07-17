#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

void printl(list<int> list_of_int)
{
	for (auto i : list_of_int )	{cout << i << " ";}
		cout << endl;
}

int main(int argc, char const *argv[])
{
	vector<int> vec_of_int{1,2,3,4,5,6,7,8,9};

	// list;
	list<int> list_of_int1;
	copy(vec_of_int.cbegin(), vec_of_int.cend(), inserter(list_of_int1, list_of_int1.begin()));
	printl(list_of_int1);

	list<int> list_of_int2;
	copy(vec_of_int.cbegin(), vec_of_int.cend(), back_inserter(list_of_int2));
	printl(list_of_int2);

	list<int> list_of_int3;
	copy(vec_of_int.cbegin(), vec_of_int.cend(), front_inserter(list_of_int3));
	printl(list_of_int3);

}