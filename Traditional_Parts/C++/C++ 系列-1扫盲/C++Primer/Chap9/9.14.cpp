#include <vector>
#include <list>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	list<const char *> list_of_char_pointers{"/. \\", "/. \\\\", "/. \\\\\\"};
	vector<string> vec_str;
	vec_str.assign(list_of_char_pointers.begin(), list_of_char_pointers.end());
	for(auto i : vec_str)
	{
		cout << i << endl;
	}
	return 0;
}