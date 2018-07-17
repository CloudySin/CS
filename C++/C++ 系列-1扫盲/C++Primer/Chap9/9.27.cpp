#include <iostream>
#include <forward_list>

using namespace std;

int main(int argc, char const *argv[])
{
	forward_list<int> ints_f_l = {1,2,3,4,5,6,7,8,9,0,};
	auto iter_pre = ints_f_l.before_begin();
	auto iter_now = ints_f_l.begin();
	
	for(auto i : ints_f_l)
	{
		if (i & 0x1)
		{
			iter_now = ints_f_l.erase_after(iter_pre);
		}
		else{
			iter_pre = iter_now++;
		}
	}

	for(auto i : ints_f_l)	cout << i << endl;
	
	return 0;
}