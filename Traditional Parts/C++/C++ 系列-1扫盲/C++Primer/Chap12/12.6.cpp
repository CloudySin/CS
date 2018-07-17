#include <iostream>
#include <vector>

using namespace std;


vector<int>* fun1()
{
	return new vector<int>{ };
} 

vector<int>* read_in(vector<int>* vs)
{	
	for(int i; cout << "Enter: ", cin >> i; vs->push_back(i));
	return vs;
}

ostream& print_out(vector<int>* vs)
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
	delete p1;
	p1 = nullptr;
	return 0;
}