//
//  Write a program that takes the names of an input file and two output files.
//  The input file should hold integers. Using an istream_iterator read the input file.
//  Using ostream_iterators, write the odd numbers into the first output file.
//  Each value should be followed by a space.Write the even numbers into the second file.
//  Each of these values should be placed on a separate line.
//
//  Run: ./a.out "../data/input.txt" "../data/odd.txt" "../data/even.txt"

#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v_o_i;
	
	fstream in_file("input.txt", fstream::in);
	fstream out_file1("out_file1.txt", fstream::out), out_file2("out_file2.txt", fstream::out);

	istream_iterator<int> in(in_file), eof;
	ostream_iterator<int> out1(out_file1, " "), out2(out_file2, " ");

	for_each(in, eof, [&out1, &out2](const int i){
		*(i & 0x1 ? out1 : out2)++ = i;
	});
}