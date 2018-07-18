#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

void elim_dups(vector<string> & words){
	sort(words.begin(), words.end());
	words.erase(unique(words.begin(), words.end()), words.end());
}

bool check_size(const string &s, string::size_type sz)
{
	return s.size() >= sz;
}

void biggies_partition(vector<string> &words, vector<string>::size_type given_sz)
{
	elim_dups(words);
	auto first_place = stable_partition(words.begin(), words.end(), bind(check_size, _1, given_sz));
	for_each(words.begin(), first_place, [](const string&s){cout << s << " ";});
}

int main(int argc, char const *argv[])
{
	vector<string> vec_of_str{
		"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
	};
	biggies_partition(vec_of_str , 4);
}