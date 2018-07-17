#include <iostream>

using namespace std;

void Insertion_Sort(int A[], int count)

/* There is no actual "move" in data. Four steps are involved.*/

/* Total Procedure: COPY_OUT --> < COPY, MOVE > --> COPY_IN. */
	/* 1.	Copy "Backwards" Moved-One OUT. */		/* u, w, x, ([v] --> k) */
		/* 2.	Move_Forward. */			
		/* 3.	Copy_Backwords. */			
													/* u, w, [x], v */
													/*  u, w, [x], x --> v */
													/* u, [w], x, x */
													/*  u, [w], w --> x, v */
													/* [u], w, w, x */
		/* The [] is  untouched. */
		/* The [] is followed by two identical values. */
	/* 4.	Copy Backwards Moved-One IN. */ /* [u], k(v) --> w, w, x */

{
	for (int i = 1; i < count; ++i)
	{
		int j = i - 1;		

		int key = A[i];		/* 1.	Copy_Backwards_OUT. */

		while(j >= 0 && key < A[j])
		{
							/* 2.	Moved_Forward Implicitly: j = i - 1 ) */

			A[j+1] = A[j];	/* 3.	Copy_Backwords. ( [] is untouched.) */

			--j;			/* 2.	Move_Forward. ( [] is followed by two identical values.) */
		}
		A[j+1] = key;		/* 4.	Copy_Backwards_IN. ( [] is followed by two identical values.) */
	}
}

int main(int argc, char const *argv[])
{
	int A[] = {10, 3, 4, 5, 6, 8, 7, 9, 2, 1};
	int count = 0;
	for (auto i : A)	{	++count;}
	
	Insertion_Sort(A, count);
	
	for (auto i : A)	{	cout << i << " ";}
	
	return 0;
}