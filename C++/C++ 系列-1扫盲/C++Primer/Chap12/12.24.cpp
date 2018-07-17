#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	string x;
	cin >> x;
	char *save = new char[x.size()+1];
	strcpy(save, x.c_str());

	cout << save << endl;

	delete [] save;
	
	return 0;
}