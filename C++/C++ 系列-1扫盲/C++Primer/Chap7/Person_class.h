#ifndef Person_class
#define Person_class

#include <iostream>
#include <string>

class Person;
std::istream &in_put(std::istream &iput, Person &sb);

class Person 
{
	friend std::istream &in_put(std::istream &iput, Person &sb);
	friend std::ostream &out_put(std::ostream &oput, const Person &sb);
public:
	Person() = default;
	Person(const std::string &s1, const std::string &s2):name(s1), address(s2){}
	Person(std::istream &is){in_put(is, *this);}

	auto get_name() const -> std::string const& { return name; }
    auto get_addr() const -> std::string const& { return address; }
private:
    std::string name;
    std::string address;
};

std::istream &in_put(std::istream &iput, Person &sb)
{
	iput >> sb.name >> sb.address;
	return iput;
}
std::ostream &out_put(std::ostream &oput, const Person &sb)
{
	oput << "[Name:]"<< sb.name << "[Address:]" << sb.address;
	return oput;
}
#endif