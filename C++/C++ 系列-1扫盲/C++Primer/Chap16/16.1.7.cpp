#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

template<typename T, unsigned N>
constexpr unsigned size_self(const T (&)[N])
{
	return N;
}

int main(int argc, char const *argv[])
{
	int v[] = {1,324,235,232,42345,23,423,9};
	string s[] = {"1r", "af", "adaw", "ae"};
	char c[] = {'w', 'w'};
	
	cout << size_self(v) << endl;
	cout << size_self(s) << endl;
	cout << size_self(c) << endl;
	return 0;
}