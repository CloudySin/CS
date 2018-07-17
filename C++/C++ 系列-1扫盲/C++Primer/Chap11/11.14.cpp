#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>

using namespace std;
using MAP = map<string, vector<pair<string, string>>>;

MAP make_up()
{
	MAP Houses;

	for(string houses; cout << "「Please enter House name:」 ", cin >> houses && houses != "@q";)
	{
		for(string name, birth; 
			cout << "「Please enter people's name and his birthday(97-11-16):」 ", 
			cin >> name && name != "@q",
			cin >> birth && birth != "@q";)
		{
			Houses[houses].emplace_back(name, birth);
		}
	}
	return Houses;
}

void print_Houses(MAP const& m)
{
	for(auto const& single : m)
	{
		cout << "「Houses」: " << single.first << endl;
		
		for(auto const& info : single.second)
		{
			cout << "「Names」:" << info.first << " " << endl;
			cout << "「Birthday」:" << info.second << " " << endl;
		}
		cout << endl;
	}	
}

void make_files(MAP const& m)
{
	fstream file("records_of_11_14.txt", fstream::app);
	for(auto const& single : m)
	{
		file << "「Houses」: " << single.first << endl;
		
		for(auto const& info : single.second)
		{
			file << "「Names」:" << info.first << " " << endl;
			file << "「Birthday」:" << info.second << " " << endl;
		}
		file << endl;
	}
}

int main(int argc, char const *argv[])
{
	make_files(make_up());

}