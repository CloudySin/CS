#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <cctype>

using namespace std;
using MAP = map<string, size_t>;
using SET = set<string>;

void print_map(MAP const &m)
{
	for(auto &x : m)	{cout << x.first << " " << x.second << endl;}
}

// 11.3
MAP count ()
{
	MAP cate;
	for(string word; (cin >> word) && (word != "exit"); ++cate[word]);
	return cate;
}

// 11.4
string const& make_all_low_case(string & s)
{
	for(auto & charac : s)	{	charac = tolower(charac);}
	return s;
}

// 11.4
MAP make_low_case_and_count() 
{
	MAP cate;
	for(string word; (cin >> word) && (word != "exit"); ++cate[make_all_low_case(word)]);
	return cate;
}

int main(int argc, char const *argv[])
{
	cout << "[ex11.3] Enter a few words please:\n";
	print_map(count());
	cout << "[ex11.4] Enter a few words please:\n";
	print_map(make_low_case_and_count());
	return 0;
}