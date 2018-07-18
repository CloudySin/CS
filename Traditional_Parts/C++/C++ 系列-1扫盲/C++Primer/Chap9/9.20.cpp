#include <iostream>
#include <deque>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	list<int> ints{34,5234,534523,6,3245,3,5,2345,43,234,1523,362,56,45314,36,451,453,64,32};
	deque<int> even_ints;
	deque<int> odd_ints;
	for(auto i : ints)
	{
		( ( i & 0x1) ? odd_ints : even_ints).emplace_back(i);
	}
	
	cout << "[[[Even_ints]]]: " << endl;
	for(auto i : even_ints){cout << i << endl;}

	cout << "[[[Odd_ints]]]: " << endl;
	for(auto i : odd_ints){cout << i << endl;}		
	return 0;
}