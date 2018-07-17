#include <iostream>
#include <vector>
#include <memory>

using namespace std;
using S_ptr = shared_ptr<vector<int>>;


S_ptr fun1()
{
	return make_shared<vector<int>>();
} 

S_ptr read_in(S_ptr vs)
{	
	for(int i; cout << "Enter: ", cin >> i; vs->push_back(i));
	return vs;
}

auto print_out(S_ptr vs) -> ostream& 
{	
	for(auto i : *vs){
		cout << i << endl;
	}
	return cout;
}


int main(int argc, char const *argv[])
{
	auto p1 = read_in(fun1());
	print_out(p1);
	return 0;
}