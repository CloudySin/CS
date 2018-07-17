#2.2-1	Express the function [n^(3)]/1000 - 100n^(2) + 3 in terms of θ-notation.
- θ(n^(3))

#2.2-2	Consider sorting n numbers stored in array A by 
#	
#	first finding the smallest element of A and exchanging it with the element in A[1]. 
#	Then find the second smallest element of A, and exchange it with A[2]. 
#	Continue in this manner for the first n􏰃-1 elements of A. 
# 
#	Write pseudocode for this algorithm, which is known as selection sort. 
#	What loop invariant does this algorithm maintain? 
#	Why does it need to run for only the first n - 1 elements, rather than for all n elements? 
#	Give the best-case and worst-case running times of selection sort in θ-notation.

- code:
```cpp
	void Selection_Sort(int A[], int N)
	{
		int tiny = A[0];
		int tiny_index = 0;
		int temp;

		for (int j = 0; j < N; ++j)
		{
			for (int i = j+1; i <= N; ++i)
			{
				if (A[i] < tiny)
				{
					tiny = A[i];
					tiny_index = i;
				}
			}
			temp = 	A[j];
			A[j] = A[tiny_index];
			A[tiny_index] = temp;
		}
	}
```
- Loop_Invariant: A[0...j] is always in sorted order.

- Reasons for "n-1" : The first one doesnt have to exchange with itself.

- 
	Best_Case: θ(n).
	Worst_Case: θ(n^(2)).

##2.2-3 Consider linear search again (see Exercise 2.1-3). How many elements of the input sequence need to be checked on the average, assuming that the element being searched for is equally likely to be any element in the array? How about in the worst case? What are the average-case and worst-case running times of linear search in θ-notation? Justify your answers.
- average: 
		number: n / 2;
		time: θ(n)
- worst: 
		number: n;
		time: θ(n)

##2.2-4	How can we modify almost any algorithm to have a good best-case running time?
- Add a "checker" to see if the input already satisfy the results.























