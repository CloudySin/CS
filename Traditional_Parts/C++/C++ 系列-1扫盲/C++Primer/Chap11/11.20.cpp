#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
	map<string, size_t> word_counter;
	for(string word; cin >> word && word != "exit";)
	{
		auto condition = word_counter.insert({word, 1});
		if (!condition.second)
		{
			++condition.first->second;
		}
	}

	for(auto i : word_counter)	{cout << i.first << " " << i.second << 
								((i.second > 1) ? " times\n" : " time\n");}
	return 0;
}