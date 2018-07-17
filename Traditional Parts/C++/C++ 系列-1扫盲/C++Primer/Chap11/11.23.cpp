#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	multimap<string, string> families;
	
	for(string family, name; 
		cin >> family && family != "exit",
		cin >> name && name != "exit";)
	{
		families.insert({name, family});
	}

	for(auto someone : families) 	
	{
		cout << "family: " << someone.first << endl 
			 << "name: " << someone.second << endl;
	}
}