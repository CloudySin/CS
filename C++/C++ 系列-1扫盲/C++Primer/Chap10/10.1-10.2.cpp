#include <iostream>
#include <list>
#include <string>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> vec_of_int{1,2,32,4,35,24,33,32,44,2};
	cout << count(vec_of_int.begin(), vec_of_int.end(), 3) << endl;

	list<string> sth{"qewevb", "weffdw", "aiucbiwencw", "cwqc"};
	cout << count(sth.cbegin(), sth.cend(), "cwqc") << endl;
	return 0;
}