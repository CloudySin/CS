#include "12.19.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	fstream infile("book.txt");
	if(!infile) {	cout << "Input unavaliable." << endl;	return -1;	}

	StrBlob b;
	string s;
	// cin;
	while(getline(infile, s)) {	b.push_back(s);}
	// cout;
	for(auto i = b.begin();neq(i, b.end()); i.incr()) {	cout << i.deref() << endl;}

	return 0;
}