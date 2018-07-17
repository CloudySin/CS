#include <iostream>
#include <utility>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<pair<string, int>> v_of_p;
	string str;
	int i;
	
	while(cin >> str >> i){
		v_of_p.emplace_back(str, i);	//easiest one~
		// v_of_p.push_back(pair<string, int>(str, i));
		// v_of_p.push_back(make_pair(str, i));
		// v_of_p.push_back({str, i});
	}

	for(auto i : v_of_p){
		cout << i.first << " " << i.second << endl;
	}
}