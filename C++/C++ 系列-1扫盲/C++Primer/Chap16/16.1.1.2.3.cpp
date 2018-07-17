#include <iostream>
#include <string>

using namespace std;

// exercise 16.1.1:
// When the compiler instantiates a template, it create a new "instance", 
// using the given actual given parameters in place of the corresponding 
// template parameters.

// exercise 16.1.2:
template <typename T>
int compare (const T& v1, const T& v2)
{
    if(v1<v2) return -1;
    if(v2<v1) return 1;
    return 0;
}
class Sales_data
{
public:
    int ISBN;
};

int main()
{
    cout << compare(1, 8) << endl;
    // Sales_data a, b;
    // cout << compare(a, b) << endl;
    return 0;
}