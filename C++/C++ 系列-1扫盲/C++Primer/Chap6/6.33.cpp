#include <iostream>
#include <vector>
#include <string>

using namespace std;

void re_cur(vector<int>::iterator i, vector<int>::iterator x)
{
	if (i != x )
	{
		cout << *i << endl;
		return re_cur(++i, x);
	}
	
}
int main(int argc, char const *argv[])
{
	vector<int> sth{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	re_cur(sth.begin(), sth.end());
	return 0;
}