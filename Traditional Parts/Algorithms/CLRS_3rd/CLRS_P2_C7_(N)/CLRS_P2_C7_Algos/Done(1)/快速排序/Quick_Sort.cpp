#include <iostream>
#include "Quick_Sort_Operations.h"

using namespace std;

int main(int argc, char const *argv[])
{
	int A[] = {1,32,42,34,25,2,34,23,423,4235,23,4};
	Quick_Sort(A, 0, sizeof(A)/sizeof(*A) - 1);
	for(auto i : A)
	{
		cout << i << " ";
	}
	return 0;
}