#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <exception>

using namespace std;

class StrBlob
{
public:
	using size_type = vector<string>::size_type;
	
	// initializing;
	StrBlob():data(make_shared<vector<string>>()){ }
	StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il)){ }
	
	// states;
	size_type size() const {return data -> size();}
	bool empty() {return data->empty();}
	
	// implementations;
	void push_back(const string &s)	{data -> push_back(s);}
	
	void pop_back(){
		check(0, "pop_back on empty StrBlob");
		return data -> pop_back();
	}

	string &front(){
		check(0, "front on empty StrBlob");
		return data -> front();
	}
	
	string &back(){
		check(0, "back on empty StrBlob");
		return data -> back();
	}

	const string &front() const{
		check(0, "front on empty StrBlob");
		return data -> front();
	}

	const string &back() const{
		check(0, "back on empty StrBlob");
		return data -> back();
	}

private:
	shared_ptr<vector<string>> data;

	void check(size_type i, const string& msg) const{
		if (i>=data->size())	{	throw out_of_range(msg);}
	};
};
