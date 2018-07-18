#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void elim_dups(vector<string> & words){
	sort(words.begin(), words.end());
	words.erase(unique(words.begin(), words.end()), words.end());
}

// 10.18
void biggies_partition(vector<string> &words, vector<string>::size_type given_sz){
	elim_dups(words);

	// get starting place;
	auto first_place = partition(words.begin(), words.end(), [given_sz](const string &str){
		return str.size() >= given_sz;
	});

	// print result;
	for(auto i = words.cbegin(); i != first_place; ++i)
	{
		cout << *i << " ";
	}
}

// 10.19
void biggies_stable_partition(vector<string> &words, vector<string>::size_type given_sz){
	elim_dups(words);

	// get starting place;
	auto first_place = stable_partition(words.begin(), words.end(), [given_sz](const string &str){
		return str.size() >= given_sz;
	});

	// print result;
	for(auto i = words.begin(); i != first_place; ++i)
	{
		cout << *i << " ";
	}
}

int main(int argc, char const *argv[])
{
	vector<string> vec_of_str
	{
		"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
	};
	// 10.18
	vector<string> v1(vec_of_str);
	cout << "「biggies_partition」:" << endl;
	biggies_partition(v1, 4);
	cout << endl;
	// 10.19
	vector<string> v2(vec_of_str);
	cout << "「biggies_stable_partition」:" << endl;
	biggies_stable_partition(v2, 4);
	return 0;
}