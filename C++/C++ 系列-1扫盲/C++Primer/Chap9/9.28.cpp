#include <iostream>
#include <forward_list>
#include <string>

using namespace std;


void fun_to_find_and_unit(forward_list<string> &f_l_str, const string &str1, const string &str2)
{
	auto ite_pre = f_l_str.before_begin();
	for( auto ite_now = f_l_str.begin(); ite_now != f_l_str.end(); ite_pre = ite_now++)
	{
		if (*ite_now == str1)
		{
			f_l_str.insert_after(ite_now, str2);
			return;
		}
	}
	
	f_l_str.insert_after(ite_pre, str2);
}
int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}