#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> sth = {1,1,1,1,1,1,1,1,1,1};
	int sum = accumulate(sth.cbegin(), sth.cend(), 10086);
	cout << sum << endl;
	return 0;
}