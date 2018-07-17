#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> vec_of_str{"uyf", "jhg", "po"};
	for(string word; cout << "Enter :\n", cin >> word && word != "exit";)
	{
		auto is_excluded = binary_search(vec_of_str.cbegin(), vec_of_str.cend(), word);
		auto result = ( is_excluded ? "excluded" : "not excluded" );
		cout << result << endl;
	}
	return 0;
}