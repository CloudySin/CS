##6.2-1	Using Figure 6.2 as a model, illustrate the operation of MAX-HEAPIFY(A,3) on the array A = <27;17;3;16;13;10;1;5;7;12;4;8;9;0>.
- Omitted.

##6.2-2	Starting with the procedure MAX-HEAPIFY, write pseudocode for the procedure MIN-HEAPIFY(A,i), which performs the corresponding manipulation on a min-heap. How does the running time of MIN-HEAPIFY compare to that of MAX-HEAPIFY?
> Heap_Operation.h

##6.2-3	What is the effect of calling MAX-HEAPIFY.A;i/ when the element AŒi􏰖 is larger than its children?
- Nothing happens.

##6.2-4	What is the effect of calling MAX-HEAPIFY(A,i) for i > A.heap-size/2?
- Segmentation fault occurs.

##6.2-5	The code for MAX-HEAPIFY is quite efficient in terms of constant factors, except possibly for the recursive call in line 10, which might cause some compilers to produce inefficient code. Write an efficient MAX-HEAPIFY that uses an iterative control construct (a loop) instead of recursion.


##6.2-6	Show that the worst-case running time of MAX-HEAPIFY on a heap of size n is 􏰗Big_Omega(lg(n)). (Hint: For a heap with n nodes, give node values that cause MAX-HEAPIFY to be called recursively at every node on a simple path from the root down to a leaf.)
- Worst case:
				height  = 	lg(n + 1) > lg(n) ;
-So:

