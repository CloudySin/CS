#include <iostream>
#include <set>
#include "Sales_data_class.h"

using namespace std;

bool less(Sales_data const &object1, Sales_data const &object2)
{
	return object1.isbn() < object2.isbn();
}

int main(int argc, char const *argv[])
{
	using  LESS = bool(*)(Sales_data const &object1, Sales_data const &object2);
	multiset<Sales_data, LESS> book_store(LESS);
	return 0;
}