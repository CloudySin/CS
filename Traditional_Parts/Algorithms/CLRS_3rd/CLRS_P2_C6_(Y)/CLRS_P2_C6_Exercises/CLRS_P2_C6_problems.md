##6-1 Building a heap using insertion	
##	We can build a heap by repeatedly calling MAX-HEAP-INSERT to insert the ele- ments into the heap. Consider the following variation on the BUILD-MAX-HEAP procedure:
##-
##	BUILD-MAX-HEAP_0 (A)
##	1 A.heap-size = 1
##	2 for i = 2 to A.length
##	3 	MAX-HEAP-INSERT(A, A[i])
##-	
##	a. Do the procedures BUILD-MAX-HEAP and BUILD-MAX-HEAP_0 always create the same heap when run on the same input array? Prove that they do, or provide a counterexample.
- 

##	b. Show that in the worst case, BUILD-MAX-HEAP0 requires ‚.nlgn/ time to build an n-element heap.
- 


##6-2 Analysis of d-ary heaps
##	A **d-ary heap** is like a binary heap, but (with one possible exception) non-leaf nodes have d children instead of 2 children.
##- 	
##	a. How would you represent a d-ary heap in an array?
- 

##	b. What is the height of a d-ary heap of n elements in terms of n and d?
-

##	c. Give an efficient implementation of EXTRACT-MAX in a d-ary max-heap. An- alyze its running time in terms of d and n.
- 

##	d. Give an efficient implementation of INSERT in a d-ary max-heap. Analyze its running time in terms of d and n.
- 

##	e. Give an efficient implementation of INCREASE-KEY(A, i, k), which flags an error if k < A[i] 􏰆, but otherwise sets A[i] 􏰆= k and then updates the d-ary max-heap structure appropriately. Analyze its running time in terms of d and n.
- 


##6-3 Young tableaus
##	An m x n **Young tableau** is an m 􏰘x n matrix such that the entries of each row are in sorted order from left to right and the entries of each column are in sorted order from top to bottom. Some of the entries of a Young tableau may be positive_infinity, which we treat as nonexistent elements. Thus, a Young tableau can be used to hold r 􏰔<= mn finite numbers.
##-
##	a. Draw a 4􏰘4 Young tableau containing the elements {9,16,3,2,4,8,5,14,12}.
- 

##	b. Argue that an m 􏰘x n Young tableau Y is empty if Y[1, 1]􏰆 = positive_infinity. Argue that Y is full (contains mn elements) if Y [m, n]􏰆 < 1.
- 

##	c. Give an algorithm to implement EXTRACT-MIN on a nonempty m 􏰘x n Young tableau that runs in O(m+n) time. Your algorithm should use a recursive subroutine that solves an m x􏰘 n problem by recursively solving either an (m-1)xn or an mx(n-1) subproblem. (Hint: Think about MAX-HEAPIFY.) Define T(p), where p = m + n, to be the maximum running time of EXTRACT-MIN on any m 􏰘x n Young tableau. Give and solve a recurrence for T(p) that yields the O(m+n) time bound.
- 

##	d. Show how to insert a new element into a nonfull m 􏰘x n Young tableau in O(m+n) time.
- 

##	e. Using no other sorting method as a subroutine, show how to use an n x􏰘 n Young tableau to sort n^(2) numbers in O(n^(3)) time.
- 

##	f. Give an O(m+n)-time algorithm to determine whether a given number is stored in a given m x􏰘 n Young tableau.
- 

