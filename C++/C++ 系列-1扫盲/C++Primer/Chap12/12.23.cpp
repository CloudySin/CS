#include <iostream>
#include <new>
#include <string>

using namespace  std;

int main(int argc, char const *argv[])
{
	// 1;
	const char *t1 = "Over";
	const char *t2 = "Come";
	
	char* com = new char[strlen(t1)+strlen(t2)+1];
	
	strcpy(com, t1);
	strcat(com, t2);
	
	cout << com << endl;
	
	// 2;
	const string s1{"Wake"}, s2{"Up"};
	strcpy(com, (s1+s2).c_str());
	cout << com << endl;

	delete [] com;
	return 0;
}