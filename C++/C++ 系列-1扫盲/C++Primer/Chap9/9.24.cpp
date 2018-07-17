#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> sth_vec{12,2};
	cout << sth_vec[0] << endl;
	cout << sth_vec.front() << endl;
	cout << *sth_vec.begin() << endl;
	return 0;
}