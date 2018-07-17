#include <iostream>
#include  "FIND_MAX_CROSSING_SUBARRAY.h"

using namespace std;

data FIND_MAXIMUM_SUBARRAY(int A[], int lo, int hi)
{
	data result;

	data left;
	data right;
	data middle;
	
	if (lo == hi)
	{
		result(lo, hi, A[lo]);
		return result;
	}
	else{
		int mid = (lo + hi) / 2;
		left = FIND_MAXIMUM_SUBARRAY(A, lo, mid);
		right = FIND_MAXIMUM_SUBARRAY(A, mid+1, hi);
		middle = FIND_MAX_CROSSING_SUBARRAY(A, lo, hi);	
	}
	if (right.sum() < left.sum() && middle.sum() < left.sum())			{	return left;}
	else if (left.sum() < right.sum() && middle.sum() < right.sum())	{	return right;} 
	else																{	return middle;}
}

int main(int argc, char const *argv[])
{
	int A[] = {1,2,3,-3,2,4,-88,-3,5,6,8};
	int size = sizeof(A)/A[0];
	data result = FIND_MAXIMUM_SUBARRAY(A, 0, size);
	result.show();
	return 0;
}