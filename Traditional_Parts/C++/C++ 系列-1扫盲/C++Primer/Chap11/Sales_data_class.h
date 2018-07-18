#ifndef Sales_data_class
#define Sales_data_class

#include <iostream>
#include <string>

class Sales_data;
std::istream &in_put(std::istream &is, Sales_data &sth);

class Sales_data
{
	friend std::istream &in_put(std::istream &, Sales_data &);
	friend std::ostream &show(std::ostream &, Sales_data &);
	friend Sales_data add(const Sales_data &, const Sales_data &);
public:
	Sales_data() = default;
	Sales_data(const std::string &s) : book_No(s){}
	Sales_data(const std::string &s, unsigned n, double p):book_No(s), saled_amount(n), revenue(p*n){}
	Sales_data(std::istream &is) {in_put(is, *this);}

	std::string isbn() const { return book_No; };
	Sales_data& combine(const Sales_data &);

private:
	inline double avg_price() const;
	std::string book_No;
	unsigned saled_amount = 0;
	double revenue = 0.0;
};

//  non-member functions
std::istream &in_put(std::istream &is, Sales_data &sth)
{
	double price = 0;
	is >> sth.book_No >> sth.saled_amount >> price;
	sth.revenue = price * sth.saled_amount;
	return is;
}
std::ostream &show(std::ostream &os, Sales_data &sth)
{ 
	os  << "[book_No]: "<< sth.book_No 
		<< "[saled_amount]:" << sth.saled_amount 
		<< "[revenue]:" << sth.revenue;
	std::cout << std::endl;
	return os;
}
Sales_data add(const Sales_data &sth1, const Sales_data &sth2)
{
	Sales_data sum = sth1;
	sum.combine(sth2);
	return sum;
}
// member functions:
Sales_data& Sales_data::combine(const Sales_data &sth)
{
	saled_amount += sth.saled_amount;
	revenue += sth.revenue;
	return *this;
}
inline double Sales_data::avg_price() const {return saled_amount ? revenue / saled_amount : 0;}


#endif
