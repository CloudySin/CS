#include "12.19.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	const StrBlob b = {"Hello", "World", "!"};

	for(auto i = b.begin(); neq(i, b.end()); i.incr()) {	cout << i.deref() << " ";}
	return 0;
}