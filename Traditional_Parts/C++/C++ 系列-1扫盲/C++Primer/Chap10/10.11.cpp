#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void print_out(vector<string> & vec)
{
	for(auto const& i : vec)
	{
		cout << i << endl;
	}
}

inline bool is_shorter(const string &s1, const string &s2)	{	return s1.size() < s2.size();	}

void elim_dups(vector<string> &vec)
{
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());
}

int main(int argc, char const *argv[])
{
	vector<string> vec_str {
								"Hello", "Drink more water", 
								"Hi", "Drink more water", 
								"Eat healthily", "Drink more water",
								"Happy", "Brilliant",
							};
	elim_dups(vec_str);
	stable_sort(vec_str.begin(), vec_str.end(), is_shorter);
	print_out(vec_str);


	return 0;
}