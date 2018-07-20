![](http://latex.codecogs.com/gif.latex?)

### Exercises 7.2-1
***
Use the substitution method to prove that the recurrence ![](http://latex.codecogs.com/gif.latex?T\left(n\right)) = ![](http://latex.codecogs.com/gif.latex?T\left(n-1\right)) + ![](http://latex.codecogs.com/gif.latex?\Theta\left(n\right)) has the
solution ![](http://latex.codecogs.com/gif.latex?T\left(n\right)) = ![](http://latex.codecogs.com/gif.latex?\Theta\left(n^{2}\right)), as claimed at the beginning of Section 7.2.

### `Answer`
![](http://latex.codecogs.com/gif.latex?T\left(n\right)) = ![](http://latex.codecogs.com/gif.latex?T\left(n-1\right)) + ![](http://latex.codecogs.com/gif.latex?\Theta\left(n\right)) = ![](http://latex.codecogs.com/gif.latex?\Theta\left(n\right)) + ![](http://latex.codecogs.com/gif.latex?\Theta\left(n-1\right)) + ... + ![](http://latex.codecogs.com/gif.latex?\Theta\left(1\right)) = ![](http://latex.codecogs.com/gif.latex?\Theta\left(n^{2}\right))


### 7.2-2
***
What is the running time of QUICKSORT when all elements of array A have the same value?

### `Answer`
It's the worst-case partitioning, which is the same as 7.2.1, which is ![](http://latex.codecogs.com/gif.latex?\Theta\left(n^{2}\right)).


### 7.2-3
***
Show that the running time of QUICKSORT is ![](http://latex.codecogs.com/gif.latex?\Theta\left(n^{2}\right)) when the array A contains distinct elements and is sorted in decreasing order.

### `Answer`
Same as 7.2-2, it's the worst-case partitioning as well. The result is absolutely ![](http://latex.codecogs.com/gif.latex?\Theta\left(n^{2}\right)).


### 7.2-4
***
Banks often record transactions on an account in order of the times of the transac- tions, but many people like to receive their bank statements with checks listed in order by check number. People usually write checks in order by check number, and merchants usually cash them with reasonable dispatch. The problem of converting time-of-transaction ordering to check-number ordering is therefore the problem of sorting almost-sorted input. Argue that the procedure INSERTION-SORT would tend to beat the procedure QUICKSORT on this problem.

### `Answer`

Quick_Sort: ![](http://latex.codecogs.com/gif.latex?\Theta\left(n^{2}\right)).

Insertion_Sort: Less than ![](http://latex.codecogs.com/gif.latex?\Theta\left(n^{2}\right)).(Due to the already sorted order.)


### 7.2-5
***
Suppose that the splits at every level of quicksort are in the proportion 1-![](http://latex.codecogs.com/gif.latex?\alpha) to ![](http://latex.codecogs.com/gif.latex?\alpha), where 0 < ![](http://latex.codecogs.com/gif.latex?\alpha) 􏰎![](http://latex.codecogs.com/gif.latex?\leq) 1/2 is a constant. Show that the minimum depth of a leaf in the recursion tree is approximately ![](http://latex.codecogs.com/gif.latex?􏰐\frac{-lg\left(n\right)}{lg\left( 1-\alpha  \right)}),and the maximum depth is approximately 􏰐 lg n= lg.1 􏰐  ̨/. (Don’t worry about integer round-off.)
7.3 A randomized version of quicksort 179

### `Answer`



### 7.2-6
***
Argue that for any constant 0 <  ̨ 􏰎 1=2, the probability is approximately 1 􏰐 2 ̨ that on a random input array, PARTITION produces a split more balanced than 1􏰐 ̨ to  ̨.

### `Answer`



