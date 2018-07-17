#include <iostream>

using namespace std;

class data
{
public:
	data() = default;
	data(int l_i, int r_i, int sum):left_max_index(l_i), right_max_index(r_i), sum_of_both_sides(sum) { }
	void operator=(const data & x){
		this-> left_max_index = x.left_max_index;
		this-> right_max_index = x.right_max_index;
		this-> sum_of_both_sides = x.sum_of_both_sides;
	}
	int sum()
	{
		return sum_of_both_sides;
	}
	void show()
	{
		cout << "left_max_index: " << left_max_index << endl;
		cout << "right_max_index: " << right_max_index << endl;
		cout << "sum_of_both_sides: " << sum_of_both_sides << endl;
	}
	int left_max_index;
	int right_max_index;
	int sum_of_both_sides;
};
