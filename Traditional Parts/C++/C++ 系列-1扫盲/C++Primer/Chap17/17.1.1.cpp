#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

int main(int argc, char const *argv[])
{
	tuple<int, int, int> sth{10, 20, 30};
	tuple<string, vector<string>, pair<string, int>> sth_2{"hungry...", {"I'm", "Not", "Hungry", "!..."}, {"Hungry", 2}};

	
	return 0;
}