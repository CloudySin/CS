#include <iostream>
#include "FIND_MAX_CROSSING_SUBARRAY.h"

using namespace std;

data FIND_MAX_SUBARRY_BRUTE(int A[], int N){		
	int sum = 0;
	unsigned total_sum = -1;
	
	int max_index_left;
	int max_index_right;

	int max_sum_left;
	int max_sum_right;
	

	for (int i = 0; i < N; ++i)
	{
		for (int j = i; j < N; ++j)
		{
			sum += A[j];
			if (sum > total_sum)
			{
				total_sum = sum;
				max_index_left = j;
			}
		}
	}
	max_sum_left = total_sum;

	sum = 0;
	total_sum = -1;

	for (int i = N; i >= 0; ++i)
	{
		for (int j = i; j >= 0; ++j)
		{
			sum += A[j];
			if (sum > total_sum)
			{
				total_sum = sum;
				max_index_right = j;
			}
		}
	}

	max_sum_right = total_sum;
	
	data result(max_index_left, max_index_right, max_sum_left + max_sum_right);
	return result;
}

int main(int argc, char const *argv[])
{
	int A[] = {1,2,3,-3,2,4,-8,-3,5,6,8};
	int size = sizeof(A)/A[0];
	data result = FIND_MAX_SUBARRY_BRUTE(A, size);
	result.show();
	return 0;
}