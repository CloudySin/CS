#include "Sales_data_class.h"

int main(int argc, char const *argv[])
{
	Sales_data total;
	if (in_put(std::cin, total))
	{
		Sales_data trans;
		while(in_put(std::cin, trans))
		{
			if (total.isbn()==trans.isbn())
			{
				total.combine(trans);
			}
			else{
				show(std::cout, total) << std::endl;
			}
		}
		show(std::cout, total) << std::endl;
	}else{
		std::cerr << "No data!!" << std::endl;
	}
	return 0;
}