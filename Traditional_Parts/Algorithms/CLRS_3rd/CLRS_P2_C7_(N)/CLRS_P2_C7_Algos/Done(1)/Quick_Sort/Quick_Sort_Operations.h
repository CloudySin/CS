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
	{	/*Begin with:
					 |x|<--Messes--> */
		while(A[++i] < x)	{if (i == hi)	break;}	/*Stop when A[i] is bigger.*/
		while(x < A[--j])	{if (j == lo)	break;}	/*Stop when A[j] is smaller.*/
		if (i >= j)			{				break;}	/*Stop when two crosses.*/
		exch(A[i], A[j]);	/*	We try all efforts to rearrange the elements in:
												|x|<--Smaller--><--Bigger--> order*/
	}
	exch(A[j], A[lo]);	/*
						When all stop, A[j] is the last in the smallers; 
									   A[i] is the first in the biggers.
						  
						After the EXCHANGE, here's the situation:
						  						<--Smaller-->|x|<--Bigger-->.
						
						You can see that it's THIS exchange that completes the sorting LOGIC.

						Finally, we return the index of the KEY element, which NOW is j.*/
	return j;
}

void Quick_Sort(int A[], int lo, int hi)
{
	if(hi<=lo)	return;
	int index = Partition(A, lo, hi);
	Quick_Sort(A, lo, index-1);
	Quick_Sort(A, index+1, hi);
}

