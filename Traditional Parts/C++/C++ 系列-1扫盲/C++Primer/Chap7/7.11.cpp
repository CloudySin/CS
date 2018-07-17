#include "Sales_data_class.h"

int main(int argc, char const *argv[])
{
	Sales_data item_1;
	show(std::cout, item_1) << std::endl;

	Sales_data item_2("0-201-78345-X");
	show(std::cout, item_2) << std::endl;

	Sales_data item_3("0-201-78345-X", 10, 3.7);
	show(std::cout, item_3) << std::endl;
	
	Sales_data item_4(std::cin);
	show(std::cout, item_4) << std::endl;
	return 0;
}	