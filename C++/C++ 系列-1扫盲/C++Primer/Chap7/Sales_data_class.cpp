#include <iostream>
#include <string>
#include "Sales_data_class.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Sales_data item_total, item_x;
	int i = 1;

	if(in_put(cin, item_total))
	{
		while(in_put(cin, item_x)){
			
			if (item_total.isbn() == item_x.isbn())
			{
				item_total.combine(item_x);
				++i;
			}else{
				show(cout, item_total);
				cout << "Total transaction times: " << i << endl;
				item_total=item_x;
				i = 1;
			}
		}
		show(cout, item_total);
		cout << "[Total transaction times: " << i << endl;
	}else{
		cerr << "No DATA!!!!!!" << endl;
		return -1;
	}
	return 0;
}