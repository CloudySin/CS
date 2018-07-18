#include <fstream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

void file_input_to_vector_per_element(const string &s_str, vector<string> &vec_str)
{
	fstream ifile(s_str);

	if(ifile)
	{
		string receive_str;
		while(ifile >> receive_str)
		{
			vec_str.push_back(receive_str);
		}
	}
}



int main(int argc, char const *argv[])
{
	vector<string> vec_str_act;
	file_input_to_vector_per_element("random.txt", vec_str_act);
	for(auto i : vec_str_act){
		cout << i << endl << flush << endl;
	}
	return 0;
}