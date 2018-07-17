#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

bool is_valid(const string & str)
{
    return isdigit(str[0]);
}

string arrange(const string & str)
{
    return str.substr(0,3) + "-" + str.substr(3,3) + "-" + str.substr(6);
}

int main()
{
    ifstream infile("phonenumbers.txt");

    if(!infile)
    {
        cerr << "No input files" << endl;
        return -1;
    }

    string line, word;
    vector<PersonInfo> people;
    while (getline(infile, line))
    {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
    
    for(auto const &some_one : people)
    {
        ostringstream bad_numbers, after_arranged;
        for (auto &someone_numbers : some_one.phones)
        {
            if (!is_valid(someone_numbers))
            {
                bad_numbers << ' ' << someone_numbers;
            }
            else{
                after_arranged << " " << arrange(someone_numbers);
            }
        }
        if(bad_numbers.str().empty()){
            cout << some_one.name << " " << after_arranged.str() << endl;
        }else{
            cerr << "input error " << some_one.name << endl
                 << "invalid numbers" << bad_numbers.str() << endl;
        }
    }
    
    return 0;
}