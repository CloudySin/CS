##2.3-1	
- Omitted;

##2.3-2 Rewrite the MERGE procedure so that it does not use sentinels, instead stopping once either array L or R has had all its elements copied back to A and then copying the remainder of the other array back into A.
- 
```cpp
	void Divide(int A[], int aux[], int lo, int hi)
	{
		int mid = (lo + hi) / 2;
		Divide(A, aux, lo, mid);
		Divide(A, aux, mid+1, hi);
		Merge(A, aux, lo, hi);
	}
	bool is_Sorted(int A, int N)
	{
		for (int i = 0; i < N-1; ++i)
		{
			if (A[i] > A[i+1])
			{
				return 0;
			}
		}
		return 1;
	}
	void Merge(int A[], int aux[], int lo, int hi)
	{
		if (is_Sorted())
		{
			return;
		}
		for (int i = lo; i <= hi; ++i)
		{
			aux[i] = A[i];
		}
		int i = lo, j = mid+1;
		for(int k = lo; k < hi; ++k)
		{
			if(i > mid)					{	A[k] = aux[j++];}
			else if(j > hi)				{	A[k] = aux{i++};}
			else if(aux[i] < aux[j])	{	A[k] = aux[i++];}
			else						{	A[k] = aux[j++];}
		}
	}
```
##2.3-3 Use mathematical induction to show that when n is an exact power of 2, the solution of the recurrence
##T(n)	=	{	2				if n = 2;
##			{	2T(n/2) + n     if n = 2^(k), for k > 1;
## is T(n) = nlg(n).
- When n = 2,  
			T(2) = 2 (= 2 * lg(2) );

- When n = 2^(k), for k > 1, 
			height = lg(n) + 1;
			time   = n * height;
			omitting the low part, we have T(n) = nlg(n);

##2.3-4	We can express insertion sort as a recursive procedure as follows.
##	In order to sort A[1...n], we recursively sort A[1..n-1]􏰇 and then insert A[n]􏰇 into the sorted array A[1..n-1]􏰇.
##	Write a recurrence for the running time of this recursive version of insertion sort.
- T(n)	=	{	1						if n = 1;
			{	T(n-1)	+ Theta(n)		if n > 1;

##2.3-5 Referring back to the searching problem (see Exercise 2.1-3), 
##	observe that if the sequence A is sorted, we can check the midpoint of the sequence against 􏰈v and eliminate half of the sequence from further consideration. 
##	The binary search algorithm repeats this procedure, halving the size of the remaining portion of the sequence each time.
##	Write pseudocode, either iterative or recursive, for binary search. Argue that the worst-case running time of binary search is Theta(lg(n)).
```cpp
	int bianry_search(int A[],int lo, int hi, int v)
	{
		unsigned NIL = -1;
		int mid = (lo+hi)/2;
		if(v < A[mid])
		{
			bianry_search(A, lo, mid, v);
		}
		else if(v > A[mid]){
			bianry_search(A, mid, hi, v);
		}
		else if(v == A[mid]){
			return mid;
		}
		else{
			return NIL;
		}
	}
```
##2.3-6	Observe that the while loop of lines 5–7 of the INSERTION-SORT procedure in Section 2.1 uses a linear search to scan (backward) through the sorted subarray A[1..j-1]. Can we use a binary search (see Exercise 2.3-5) instead to improve the overall worst-case running time of insertion sort to Theta(nlg(n))?
- Nope??????

##2.3-7	Describe a Theta(nlg(n))-time algorithm that, given a set S of n integers and another integer x, determines whether or not there exist two elements in S whose sum is exactly x.
- First we compute a remainder each time from x by S[i].
- Afterwards, we use binary_search to find whether a remainder exists for certain S[i].

```cpp
	bool find_sum_pair(int S[], int x, int n)
	{
		for (int i = 0; i < n; ++i)
		{
			int remainder = x - S[i];
			bianry_search(S, 0, n, remainder);
		}
	}
```