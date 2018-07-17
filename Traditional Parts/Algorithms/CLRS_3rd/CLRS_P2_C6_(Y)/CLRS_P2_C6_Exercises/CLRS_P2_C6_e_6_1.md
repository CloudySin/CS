##6.1-1	What are the minimum and maximum numbers of elements in a heap of height h?
- minimum: 2^(h-1);
- maximum: 2^(h) - 1;

##6.1-2	Show that an n-element heap has height |_lg(n)_|.
- height = lg(n - 1) = |_lg( n )_|.

##6.1-3	Show that in any subtree of a max-heap, the root of the subtree contains the largest value occurring anywhere in that subtree. 
- Of course. It's a max-heap! Any parent is larger than its children!

##6.1-4	Where in a max-heap might the smallest element reside, assuming that all elements are distinct?
- Leaf nodes.

##6.1-4	Is an array that is in sorted order a min-heap?
- Yes!

##6.1-6	Is the array with values { 23; 17; 14; 6; 13; 10; 1; 5; 7; 12 } a max-heap?
- Yes.

##6.1-7	Show that, with the array representation for storing an n-element heap, the leaves are the nodes indexed by |_(n/2)_| + 2, |_(n/2)_| + 1, ... , n.
- The number of nodes before leaves = (2^(h) - 1) - ( (2^(h) - 1) - (2^(h-1) - 1) ) 
-
									= 2^(h-1) 
-
									= |_ ( 2^(h) - 1 ) / 2 _| 
-
									= |_ n / 2 _|.
- So the answer is obvious~