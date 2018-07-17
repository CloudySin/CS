



//  Rewrite the bookstore problem from 1.6 (p. 24) using a vector to hold the transactions
//  and various algorithms to do the processing.
//  Use sort with your compareIsbn function from 10.3.1 (p. 387) to arrange the transactions in order,
//  and then use find and accumulate to do the sum.


#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include "../Chap7/Sales_data_class.h"

using namespace std;

bool compareIsbn (Sales_data &object1, Sales_data & object2)
{
	return object1.isbn() < object2.isbn();
}

int main(int argc, char const *argv[])
{
	istream_iterator<Sales_data> in(cin), eof;
	vector<Sales_data> items;

	while(in != eof)
	{
		items.push_back(*in);
	}

	sort(items.begin(), items.end(), compareIsbn);

	for(auto runner = items.cbegin(), stop = runner; runner != items.cend(); runner = stop)
	{
		stop = find_if(runner, items.cend(), [runner](const Sales_data &items){
			return items.isbn() != runner->isbn();
		});

		cout << accumulate(runner, stop, Sales_data(runner->isbn())) << endl;
	}
}