#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(int argc, char const *argv[])
{
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	vector<int> ints_v(ia, end(ia));
	list<int> ints_l(ints_v.begin(), ints_v.end());

	for(auto i = ints_l.begin(); i != ints_l.end(); )/*erase the odd*/{
		if (*i & 0x1 ){i = ints_l.erase(i);}
		else{ ++i;}
	}
	for(auto i = ints_v.begin(); i != ints_v.end(); )/*erase the even*/{	
		if (!(*i & 0x1)){i = ints_v.erase(i);}
		else{ ++i;}
	}

	// print results;
	cout << "vector: " << endl;
	for(auto i : ints_v){cout << i << endl;}
	cout << "list: " << endl;
	for(auto i : ints_l){cout << i << endl;}

	return 0;
}