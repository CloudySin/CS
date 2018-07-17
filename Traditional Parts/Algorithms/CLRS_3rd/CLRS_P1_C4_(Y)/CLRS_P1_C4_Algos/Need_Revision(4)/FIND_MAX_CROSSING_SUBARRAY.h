#include "data.h"

data FIND_MAX_CROSSING_SUBARRAY(int A[], int lo, int hi)
{
	int mid = (lo + hi) / 2;
	unsigned left_sum = -1;
	unsigned right_sum = -1;
	int sum = 0;
	int left_max_index;
	int right_max_index;

	for (int i = mid; i >= 0; --i)
	{
		sum += A[i];
		if (sum > left_sum)
		{
			left_sum = sum;
			left_max_index = i;
		}
	}
	sum = 0;
	for (int i = mid + 1; i < hi; ++i)
	{
		sum += A[i];
		if (sum > right_sum )
		{
			right_sum = sum;
			right_max_index = i;
		}
	}
	data result(left_max_index, right_max_index, left_sum + right_sum);
	return result;
}