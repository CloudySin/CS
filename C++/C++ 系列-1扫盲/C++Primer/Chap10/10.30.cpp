#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	istream_iterator<int> in(cin), eof;
	vector<int> vec_of_int(in, eof);
	sort(vec_of_int.begin(), vec_of_int.end());
	copy(vec_of_int.begin(), vec_of_int.end(), ostream_iterator<int>(cout, "\n"));
	return 0;
}