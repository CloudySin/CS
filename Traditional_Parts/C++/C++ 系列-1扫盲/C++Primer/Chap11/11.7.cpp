#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;
using MAP = map<string, vector<string> >;

MAP make_up()
{
	MAP Houses;

	for(string houses; cout << "「Please enter House name:」 ", cin >> houses && houses != "@q";)
	{
		for(string name; cout << "「Please enter people's name:」 ", cin >> name && name != "@q";)
		{
			Houses[houses].push_back(name);
		}
	}
	return Houses;
}

void print_Houses(MAP const& m)
{
	for(auto const& single : m)
	{
		cout << "「Houses」: " << single.first << endl;
		
		for(auto const& name : single.second)
		{
			cout << "「Names」:" << name << " " << endl;
		}
		cout << endl;
	}	
}

void make_files(MAP const& m)
{
	fstream file("records_of_11_7.txt", fstream::app);
	for(auto const& single : m)
	{
		file << "「Houses」: " << single.first << endl;
		
		for(auto const& name : single.second)
		{
			file << "「Names」:" << name << " " << endl;
		}
		file << endl;
	}
}

int main(int argc, char const *argv[])
{
	make_files(make_up());

}