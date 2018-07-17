#include <iostream>
#include "data.h"

using namespace std;

data FIND_MAX_SUBARRAY_LINEAR(int A[], int N)
{
	int index_of_largest_sum = 0;
	int total_sum = A[0];
	int temp_sum = 0;
	for (int i = 0; i < N; ++i)
	{
		temp_sum += A[i];
		if (total_sum < temp_sum)
		{
			total_sum = temp_sum;
			index_of_largest_sum = i;
		}
	}
	data result(1, index_of_largest_sum + 1, total_sum);
	return result;
}

data FIND_SUBARRAY_OF_J_PLUS_1(int A[], int N)
{
	int index_of_largest_sum = 0;
	int total_sum = A[0];
	int temp_sum = 0;
	for (int i = 0; i < N; ++i)
	{
		temp_sum += A[i];
		if (total_sum < temp_sum)
		{
			total_sum = temp_sum;
			index_of_largest_sum = i;
		}
	}
	data result(1, index_of_largest_sum + 1, total_sum);
	return result;
}

int main(int argc, char const *argv[])
{
	int A[] = {1, 2, 3, -7, 9};
	data result_global = FIND_MAX_SUBARRAY_LINEAR(A, 5);
	result_global.show();
	FIND_SUBARRAY_OF_J_PLUS_1(A, result_global.right_max_index);
	result_global.show();
	return 0;
}