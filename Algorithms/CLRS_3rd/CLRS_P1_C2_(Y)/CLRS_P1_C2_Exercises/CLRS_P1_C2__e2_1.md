#2.1-1 Using Figure 2.2 as a model, illustrate the operation of INSERTION-SORT on the array A = <31, 41, 59, 26, 41, 58>.
- Omitted.

#2.1-2 Rewrite the INSERTION-SORT procedure to sort into nonincreasing instead of non decreasing order.

```cpp
	template<typename T, unsigned N>
	void INSERTION_SORT_Nonincreasng( T a[], N)
	{

		for (int j = 1; j < N; --j)
		{
			int i = j - 1;
			T key = a[j];
			while(i >= 0 && a[i] > key) /* always compare and exchange with the former one */
			{
				a[i+1] = a[i]; /* copy the former one backwards */
				a[i] = key; /* values exchanged successfully ultimately */
				--i;	/* i moves forwards */
			}
	}
```

#2.1-3 Consider the searching problem:

**Input**: A sequence of n numbers A = <a1; a2; ... ;an> and a value .
**Output**: An index i such that  v = A[i] or the special value NIL if  does not appear in A.

#Write pseudocode for linear search, which scans through the sequence, looking for v. Using a loop invariant, prove that your algorithm is correct. Make sure that your loop invariant fulfills the three necessary properties.

- code:
```cpp
	auto linear_search_v(int A[], int n, int v)
	{
		int index = NIL;
		for (int i = 0; i < n; ++i)
		{
			if (v = A[i])
			{
				index = i;
				return index;
			}
		}
		return NIL;
	}
```
- Proof:
	**loop invariant**:
		- At the start of every loop, *index* contains either the index of the search value, or the *NIL*.
	
	**Initialization**:
		- At the start of the loop i = 0, there are no elements in A yet considered for comparison.
		  Value of *index* is *NIL*, indicating correctly that v has not yet been found.

	**Maintenance**: 
		- At the start of each loop, we know *index* will hold the value *NIL* since it's not been found.
		  If it has been found, we would exit the loop and return the index at which it was found.

	**Termination**: 
		- If we've reached the end of the loop then by our maintenance condition *index* will have the the value *NIL*.
		  If we've found the value, we exit the loop by returning the index.

#2.1-4	Consider the problem of adding two n-bit binary integers, stored in two n-element arrays A and B. The sum of the two integers should be stored in binary form in an (n+1)-element array C. State the problem formally and write pseudocode for adding the two integers.

A = n bit binary array
B = n bit binary array
C= n+1 bit binary array

- code
```cpp
	void add_elements(int A[], int B[], int C[], int n)
	{
		int summer = 0;
		for (int i = 0; i < n; ++i)
		{
			summer += (A[i] + B[i]);
			C[i]  = summer % 2;
			summer /= 2;
		}
		C[n] = summer;
	}
```
