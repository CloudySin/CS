#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int i = 0xf;
	
	auto check_and_decrement = [&i](){
		return --i ? false : true;
	};

	while(!check_and_decrement())
	{
		cout << i << endl;
	}
	return 0;
}