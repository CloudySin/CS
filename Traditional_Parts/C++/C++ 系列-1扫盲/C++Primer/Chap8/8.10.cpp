#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	fstream file("phonenumbers.txt");
	string line;
	vector<string> vec_str;

	while(getline(file, line))
	{
		vec_str.push_back(line);
	}

	for(auto &i : vec_str)
	{
		istringstream stored_for_a_string(i);
		string word;
		while(stored_for_a_string >> word)
		{
			cout << word << endl;
		}
	}
	return 0;
}