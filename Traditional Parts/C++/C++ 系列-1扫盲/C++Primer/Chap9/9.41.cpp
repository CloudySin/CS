#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<char> vec_of_char{'s', 'c', 'v', 'd', 'w'};
	string some_sth(vec_of_char.begin(), vec_of_char.end());
	cout << some_sth << endl;
	return 0;
}