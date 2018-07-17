#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vec_of_int{1,2,234,25,234,53,2,34,35,2,1,5};
	
	fill_n(vec_of_int.begin(), static_cast<int>(vec_of_int.size()), 0);

	for(auto i : vec_of_int)	cout << i << endl;
	
	return 0;
}