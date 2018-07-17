#include <list>
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v1{3,9,6,7};
	list<int> l1{8,76,554,78,9};
	cout << (vector<int>(l1.begin(), l1.end()) == v1 ? "yes" : "not") << endl;
	return 0;
}