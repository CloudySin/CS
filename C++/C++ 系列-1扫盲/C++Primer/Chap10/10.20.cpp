#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void bigger_than_6(vector<string> const& words)
{
	auto counts = count_if(words.begin(), words.end(), [](string const&str)->bool{
		return str.size() > 6 ;
	});

	cout << counts << endl;
}

int main(int argc, char const *argv[])
{
	vector<string> words{
		"alan","moophy","1234567","1234567","1234567","1234567"
	};
	
	bigger_than_6(words);

	return 0;
}