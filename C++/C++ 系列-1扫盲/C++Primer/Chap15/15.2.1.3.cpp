#include <iostream>

using namespace std;

class Quote
{
public:
	Quote() = default;
	Quote(const string &book_number, double sales_price) : bookNo(book_number), price(sales_price) { }
	std::string isbn() const {	return bookNo; }
	virtual double net_price(size_t n)	const {return n*price;}
	virtual ~Quote() = default;

private:
	std::string bookNo;
protected:
	double price = 0.0;	
};

double print_total(ostream &os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << endl;
	return ret;
}

int main(int argc, char const *argv[])
{
	
	return 0;
}