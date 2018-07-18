#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	deque<string> inputs;

	cout << "Please enter a sequence of strings: " << endl;
	for(string some_str ; cin >> some_str ; inputs.emplace_back(some_str));

	for (auto iterator= inputs.cbegin(); iterator!= inputs.cend(); ++iterator)
	{
		cout << *iterator<< endl;	
	}
	return 0;
}