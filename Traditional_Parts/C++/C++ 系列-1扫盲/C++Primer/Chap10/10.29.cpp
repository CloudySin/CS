#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
	fstream file("word_transformation.txt");
	istream_iterator<string> tempo_string(file), eof;
	vector<string> vec_of_string;
	copy(tempo_string, eof, back_inserter(vec_of_string));

	copy(vec_of_string.cbegin(), vec_of_string.cend(), ostream_iterator<string>(cout, "\n"));
}