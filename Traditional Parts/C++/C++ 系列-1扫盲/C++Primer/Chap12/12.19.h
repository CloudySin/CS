#ifndef StrBlobPtr_class
#define StrBlobPtr_class

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <stdexcept>

using namespace std;

class StrBlobPtr;

class StrBlob {
	friend class StrBlobPtr;
public:
	// defining type;
	using size_type = vector<string>::size_type;
	using V_O_S = vector<string>;
	// declaring constructors;
	StrBlob();
	StrBlob(initializer_list<string> il);
	
	// checking status;
	size_type size() const {return data -> size();}
	bool empty() const {return data -> empty();}
	
	// declaring adding and deleting;
	void push_back(const string &t) {data->push_back(t);}
	void pop_back();
	// declaring visiting elements;
	string& front();
	const string& front() const;
	string& back();
	const string& back() const;

	// interfaces for [StrBlobPtr]; define only after having defined [StrBlobPtr]; declaring
	StrBlobPtr begin();
	StrBlobPtr end();
	StrBlobPtr begin() const;
	StrBlobPtr end() const;

private:
	shared_ptr<vector<string>> data;
	//throw exceptions if "data[i]" is ilegal;
	void check(size_type i, const string& msg) const;
};
// defining constructors;
inline StrBlob::StrBlob() : data(make_shared<V_O_S>()){ }
StrBlob::StrBlob(initializer_list<string> il) : data(make_shared<V_O_S>(il)) { }

// defining StrBlob_check();
inline void StrBlob::check(size_type i, const string& msg)const {
	if (i > data->size()) {	throw out_of_range(msg);}
}

// defining visiting func;
inline string& StrBlob::front()
{
	// check first ;if vector is empty, throw exceptions;
	check(0, "front on empty StrBlob");
	// otherwise, return first element; (which implements on a vector)
	return data->front();
}
inline const string& StrBlob::front()const {	check(0, "front on empty StrBlob");	return data->front();}
inline string& StrBlob::back() {	check(0, "back on empty StrBlob");	return data->back();}
inline const string& StrBlob::back()const {	check(0, "back on empty StrBlob");	return data->back();}

// defining deleting func;
inline void StrBlob::pop_back() {	check(0, "pop_back on empty StrBlob");	data-> pop_back();}







// StrBlobPtr: THROWING EXCEPTIONS when visiting NONE-EXISTING elements;
class StrBlobPtr{
	friend bool eq(const StrBlobPtr&, const StrBlobPtr&);
public:
	// defining constructors
	StrBlobPtr():curr(0){ }
	StrBlobPtr(StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) { }
	StrBlobPtr(const StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz) { }

	// implementations;
	string& deref() const;
	StrBlobPtr& incr();
	StrBlobPtr& decr();

private:
	shared_ptr<StrBlob::V_O_S>
		check(size_t, const string&) const;	//if succeed, return a shared_ptr;
	weak_ptr<StrBlob::V_O_S> wptr;
	size_t curr; //current position in the vector;***************************************
};
// defining check();
inline shared_ptr<StrBlob::V_O_S>
StrBlobPtr:: check(size_t i, const string& msg) const
{
	auto ret = wptr.lock(); //check if vector still exist;
	if(!ret) {	throw runtime_error("unbound StrBlobPtr");}
	if(i >= ret->size()) {	throw out_of_range (msg);}
	return ret;
}
// dereference ptr;
inline string& StrBlobPtr::deref() const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

// increment(or decrement) and return a object; if already end(or =0 when decrement), throw exceptions;
inline StrBlobPtr& StrBlobPtr::incr()
{
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}
inline StrBlobPtr& StrBlobPtr::decr()
{
	--curr;
	check(-1, "decrement past begin of StrBlobPtr");
	return *this;
}

// begin() and end() for StrBlob
inline StrBlobPtr StrBlob::begin() {	return StrBlobPtr(*this);}
inline StrBlobPtr StrBlob::end() {	return StrBlobPtr(*this, data->size());}
inline StrBlobPtr StrBlob::begin() const {	return StrBlobPtr(*this);}
inline StrBlobPtr StrBlob::end() const {	return StrBlobPtr(*this, data->size());}

// comparations for StrBlobPtr;
inline bool 
eq(const StrBlobPtr& ls, const StrBlobPtr& rs)
{	//true if both point same vector, in which both null or point same element;
	if(ls.wptr.lock() == rs.wptr.lock()) {	return (!rs.wptr.lock() || ls.curr == rs.curr );	}
	//false if different vectors; 
	else {	return false;	}
}
inline bool neq(const StrBlobPtr& ls, const StrBlobPtr& rs) {	return !eq(ls, rs);	}

#endif