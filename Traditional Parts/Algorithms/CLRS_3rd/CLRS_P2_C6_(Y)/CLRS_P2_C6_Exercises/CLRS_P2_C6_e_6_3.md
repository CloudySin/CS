##6.3-1	Using Figure 6.3 as a model, illustrate the operation of BUILD-MAX-HEAP on the array A = <5;3;17;10;84;19;6;22;9>.
- Omitted.

##6.3-2	Why do we want the loop index i in line 2 of BUILD-MAX-HEAP to decrease from *|_ A.length/2 _|* to 1 rather than increase from 1 to *|_ A.length/2 _|*?
- The path is shorter if we start from the bottom.

##6.3-3	Show that there are at most |^ n/2^(h+1) ^| nodes of height h in any n-element heap.
- Base:
		When height = 0:
					it's the number of leaves, which is |^(n/2)^|;

- Inductive:
		When height = h - 1:
					T = |^  |_(n/2)_| / 2^(h-1+1)  ^| < |^ (n/2) / 2^(h) ^| = |^ n/2^(h+1) ^|.

- It's the number of node with height h in the old tree.