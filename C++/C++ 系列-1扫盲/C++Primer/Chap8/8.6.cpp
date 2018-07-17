#include <iostream>
#include <fstream>
#include "../Chap7/Sales_data_class.h"

using namespace std;

int main(int argc, char const *argv[])
{
	fstream ifile("book.txt");
	Sales_data item_total;
	int i = 1;
	if(in_put(ifile, item_total))
	{
		Sales_data item_x;
		while(in_put(ifile, item_x))
		{
			if (item_total.isbn() == item_x.isbn())
			{
				item_total.combine(item_x);
				++i;
			}
			else
			{
				show(cout, item_x);
				cout << "Total transaction times: " << i << endl;
				item_total=item_x;
				i = 1;
			}
		}
		show(cout, item_total);
		cout << "[Total transaction times: " << i << endl;
	}else{
		cerr << "No DATA!!!!!!" << endl;
	}
	return 0;
}