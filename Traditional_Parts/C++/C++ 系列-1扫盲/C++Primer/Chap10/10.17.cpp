#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include "../Chap7/Sales_data_class.h"

using namespace std;

int main(int argc, char const *argv[])
{
	fstream file("book.txt", fstream::in);
	
	vector<Sales_data> many_objects;
	Sales_data one_boject;
	
	while(in_put(file, one_boject))	{	many_objects.push_back(one_boject);}	// input file context;
	
	sort(many_objects.begin(), many_objects.end(), [](Sales_data &object1, Sales_data & object2){
		return object1.isbn() < object2.isbn();
	});	//sort by isbn();
	
	for(auto i : many_objects)	{	show(cout, i);}		// show result;

	return 0;
}