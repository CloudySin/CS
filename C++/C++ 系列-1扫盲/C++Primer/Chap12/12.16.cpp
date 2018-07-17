#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char const *argv[])
{
	unique_ptr<int> u_p(new int (42));
	// auto x = u_p;
	// unique_ptr<int> y_p(u_p);
	printf("%d\n", *u_p);
	u_p.reset(nullptr);
	return 0;
}