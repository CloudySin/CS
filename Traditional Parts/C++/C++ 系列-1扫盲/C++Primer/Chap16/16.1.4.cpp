#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

template<typename Iter, typename value>
Iter find_self(Iter first, Iter last, value const &value_given)
{
	for(;first!=last && *first!= value_given; ++ first);
	return first;
}


int main(int argc, char const *argv[])
{
	vector<int> v = {1,7,3432,42,452,5,236,32,342,34233,2,33,3,8};
	int is_in_vector = (v.cend() != find_self(v.cbegin(), v.cend(), 7));
	cout << (is_in_vector? "found\n" : "not found\n");

	list<string> l_S = {"汪沛涵", "毛昱雯", "浙大", "东北师范"};
	int is_in_list = (l_S.cend() != find_self(l_S.cbegin(), l_S.cend(), "李政贤"));
	cout << (is_in_list ? "在\n" : "不在\n");

	return 0;
}