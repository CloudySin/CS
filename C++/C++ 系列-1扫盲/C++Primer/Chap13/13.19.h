

#include <string>
using std::string;

class Employee
{
public:
	Employee() = default;
	Employee(const string& some_name);
	Employee(const Employee& ) = delete;
	Employee &operator=(const Employee&) = delete;

	const int id() const	{return ID;}
	
private:
	string name;
	int ID;
	static int s_incre;
};

