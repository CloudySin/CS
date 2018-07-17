#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void elim_dups(vector<string> & words){
	sort(words.begin(), words.end());
	words.erase(unique(words.begin(), words.end()), words.end());
}

void biggies(vector<string> &words, vector<string>::size_type given_sz){
	elim_dups(words);

	// sort by size, maintain alphabetical order;
	stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2){
		return s1.size() < s2.size();
	});

	// get starting place;
	auto first_place = find_if(words.begin(), words.end(), [given_sz](const string &str){
		return str.size() >= given_sz;
	});

	// print result;
	for_each(first_place, words.end(), [](const string &str){
		cout << str << " ";
	});
}

int main(int argc, char const *argv[])
{
	vector<string> vec_of_str
	{
		"God", "Bless", "you", "!!!", "MY", "FRIEND"
	};
	biggies(vec_of_str, 3);
	return 0;
}