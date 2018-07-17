#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v1{3,9,6,7}, v2{8,76,554,78,9};
	cout << (v1 != v2) << endl;
	return 0;
}