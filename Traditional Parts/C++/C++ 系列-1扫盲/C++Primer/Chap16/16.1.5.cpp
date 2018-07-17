#include <iostream>
#include <string>

using namespace std;

template<typename arr>
void print_Array(arr const &array)
{
	for (auto i : array)
	{
		cout << i;
	}
	cout << endl;
}




int main(int argc, char const *argv[])
{
	int a[] = {1,2,4,56,7,8,0};
	char b[] = {'3', '3', 's', 's', 'a'};
	string c[] = {"asf", "123r", "asc"};
	print_Array(a);
	print_Array(b);
	print_Array(c);
	return 0;
}