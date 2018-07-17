##6.4-1	Using Figure 6.4 as a model, illustrate the operation of HEAPSORT on the array A =< 5, 13, 2, 25, 7, 17, 20, 8, 4 >.
- Omitted.

##6.4-2	Argue the correctness of HEAPSORT using the following loop invariant:
##	At the start of each iteration of the **for** loop of lines 2–5, the subarray A[1..i] is a max-heap containing the i smallest elements of A[1..n]􏰖, and the subarray A[i+1..n] contains the n-i largest elements of A[1..n]􏰖, sorted.
-
- Initialization: The A[i+1..n] is empty, and the A[1..i] contain the nth smallest, which is the largest element A[1].

- Maintenance:
-	A[1] is originally the largest element in the array. 
-	After it is exchanged with the current A[i], it becomes one of the smallest elements. A[i] has become one of the largest elements.
-	After we decrease the heap_size, the new array A[1..i] is still a max-heap, containing "the i smallest elements of A[1..n]";
-	Same property is reserved for A[i+1..n], since "n-i" is ranged from 0 to n-2.

- Termination: After the loop, i=1. A[1..1] contains the smallest element A[1], and A[2..n] contains the n-1 largest elements. Thus, the array is sorted.

##6.4-3	What is the running time of HEAPSORT on an array A of length n that is already sorted in increasing order? What about decreasing order?
- Increasing:
-		Building a Heap:	O(n);
-		Max_Heapifying(n-1):		Theta(nlg(n));
-		Total_time = Theta(nlg(n));

- Decreasing:
-		Building a Heap:	non;
-		Max_Heapifying(n-1):		Theta(nlg(n));
-		Total_time = Theta(nlg(n));

-	So, the time is both Theta(nlg(n));

##6.4-4	Show that the worst-case running time of HEAPSORT is 􏰗Big_Omega(nlg(n)).
- As in 6.4-3:
				Max_Heapifying(n-1):		Theta(nlg(n));

##6.4-5 Show that when all elements are distinct, the best-case running time of HEAPSORT is 􏰗Big_Omega(nlg(n)).
- (Looks like too hard to solve~)