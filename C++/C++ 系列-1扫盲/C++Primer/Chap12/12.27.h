#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <set>
#include <map>
#include <memory>

using namespace std;

class TextQuery
{
public:
	TextQuery(fstream &ifile);
private:
	string line;//
	vector<string> lines;//
	istringstream word;
	int l_number = 1;
	map<string, int> word_line;//1
};

TextQuery::TextQuery(fstream &ifile)
{
	while(ifile >> line)
	{
		lines.push_back(line);
		while(getline(word, line))
		{
			word_line.insert({word, l_number});//words with line added;
		}
		++l_number;
	}
}


class QueryResult
{
public:
	void print()
	{

	}
private:
	int ocr_tms;
	set<int> lines;
	string line_content;
};