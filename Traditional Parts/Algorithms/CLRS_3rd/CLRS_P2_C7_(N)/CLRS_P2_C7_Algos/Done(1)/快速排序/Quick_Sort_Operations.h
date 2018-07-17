#include <iostream>

using namespace std;

void exch(int &a, int &b)	/*For exchanging values*/
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int Partition(int A[], int lo, int hi)
{
	int i = lo;
	int j = hi+1;
	int x = A[lo];
	while(1)
	{
		while(A[++i] < x)	{if (i == hi)	break;}
		while(x < A[--j])	{if (j == lo)	break;}
		if (i >= j)			{				break;}
		exch(A[i], A[j]);
	}
	exch(A[j], A[lo]);
	return j;
}

void Quick_Sort(int A[], int lo, int hi)
{
	if(hi<=lo)	return;
	int index = Partition(A, lo, hi);
	Quick_Sort(A, lo, index-1);
	Quick_Sort(A, index+1, hi);
}

