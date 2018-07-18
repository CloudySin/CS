#ifndef HasPtr_copy_assign_operator
#define HasPtr_copy_assign_operator

#include <string>
class HasPtr
{
public:
	HasPtr(const std::string &s = std::string()) : ps(new std::string (s)), i(0) { }
	HasPtr(const HasPtr& hp) : ps(new std::string(*hp.ps)), i(hp.i) { }
	HasPtr& operator=(const HasPtr& nhp)
	{
		if(this != &nhp){
			auto newps = new std::string(*nhp.ps);
			delete ps;
			ps = newps;
			i = nhp.i;
		}
		return *this;
	}
	~HasPtr(){delete ps;}
private:
	std::string *ps;
	int i;
};

#endif