#include <iostream>

using namespace std;

void exch(int &a, int &b)	/*For exchanging values*/
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int Modified_Partition(int A[], int lo, int hi)
{
	int x = A[hi];
	int l = lo-1;
	int r = hi;
	for (; i<=hi && j>=lo && i!=j; ++i, --r)
	{
		if (A[i] < A[j])
		{
			exch(A[i], A[j]);
		}
	}
	return i;
}

