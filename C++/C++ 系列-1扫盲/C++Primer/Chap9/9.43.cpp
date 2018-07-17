#include <iostream>
#include <string>

using namespace std;

void trans(string &s, string const &oldVal, string const &newVal)//replace "old" in "s" with "new";
{
	for(auto iter_s = s.begin(); iter_s <= s.end() - oldVal.size();)
	{
		string temp (iter_s, iter_s + oldVal.size());
		if (oldVal == temp)
		{
			s.erase(iter_s, iter_s + oldVal.size());
			s.insert(iter_s, newVal.begin(), newVal.end());
			iter_s += newVal.size();
		}
		else{
			++iter_s;
		}
	}

}
int main(int argc, char const *argv[])
{
	string 	s {"To drive straight thru is a foolish, tho courageous act."}, 
			oldVal{"tho", "thru"}, 
			newVal{"though", "through"}; //Initialize strings;

	trans(s, "tho", "though");// use trans function
	trans(s, "thru", "through");

	cout << s << endl;//output results;
	return 0;
}