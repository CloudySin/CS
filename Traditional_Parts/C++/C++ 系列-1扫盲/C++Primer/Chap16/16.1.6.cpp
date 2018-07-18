#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

template<typename T, unsigned size>
T* begin_self(T (&array) [size])
{
	return array;
}

template<typename T, unsigned size>
T* end_self(T (&array) [size])
{
	return array + size;
}

int main(int argc, char const *argv[])
{
	string s[] = {"what????", "what??????", "what?????????"};
	cout << *begin_self(s) << endl;
	cout << *(end_self(s)-1) << endl;
	return 0;
}