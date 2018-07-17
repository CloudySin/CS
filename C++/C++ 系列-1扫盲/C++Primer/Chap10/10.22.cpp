#include <functional>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s1, vector<string>::size_type sz)
{
	return s1.size() < sz ;
}

int main(int argc, char const *argv[])
{
	fstream file ("word_transformation.txt");
	vector<string> words;
	string word;
	while(file >> word)
	{
		words.push_back(word);
	}

	cout << count_if(words.begin(), words.end(), bind(check_size, _1, 6)) << endl;

	return 0;
}