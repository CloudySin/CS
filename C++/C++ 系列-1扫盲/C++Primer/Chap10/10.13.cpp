#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool bigger_than_four(const string &str)	{	return str.size() > 4 ; }

int main(int argc, char const *argv[])
{
	vector<string> words{"12345", "frf", "f23v", "ewfedqw", "ef342f", "efe"};
	auto one_past_last_true = partition(words.begin(), words.end(),  bigger_than_four);
	for(auto i = words.begin(); i != one_past_last_true; ++i)
	{
		cout << *i << endl;
	}
	return 0;
}
