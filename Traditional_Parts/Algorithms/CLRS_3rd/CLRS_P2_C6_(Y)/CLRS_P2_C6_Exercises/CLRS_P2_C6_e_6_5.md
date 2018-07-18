##6.5-1	Illustrate the operation of HEAP-EXTRACT-MAX on the heap A =< 15,13,9,5,12,8,7,4,0,6,2,1 >.
- Too lazy to draw so many pictures, much of which is a waste of time.

##6.5-2	Illustrate the operation of MAX-HEAP-INSERT(A, 10) on the heap A =< 15,13,9,5,12,8,7,4,0,6,2,1 >.
- Same as former one.

##6.5-3	Write pseudocode for the procedures HEAP-MINIMUM, HEAP-EXTRACT-MIN, HEAP-DECREASE-KEY, and MIN-HEAP-INSERT that implement a min-priority queue with a min-heap.
> Priority_Queue_Operations.h

##6.5-4	Why do we bother setting the key of the inserted node to 􏰐minus_infinity in line 2 of MAX-HEAP-INSERT when the next thing we do is increase its key to the desired value?
- To make the value swimming up successfully in the comparisions "key < A[i]".

##6.5-5	Argue the correctness of HEAP-INCREASE-KEY using the following loop invariant:
##-
##	At the start of each iteration of the **while** loop of lines 4–6, the subarray A[1..A.heap_size] satisfies the max-heap property, except that there may be one violation: A[i] may be larger than A[Parent(i)].
##-
##	You may assume that the subarray A[1..A.heap_size]􏰀 satisfies the max-heap property at the time HEAP-INCREASE-KEY is called.
-
- Initialization: 
-					A  is a heap except that A[i] might be larger that it's parent, because it has been modified. A[i] is larger than its children, because otherwise the guard clause would fail and the loop will not be entered (the new value is larger than the old value and the old value is larger than the children).
-
- Maintenance：
-					When we exchange A[i] with its parent, the max-heap property is satisfied except that now A[PARENT(i)] might be larger than its parent. Changing i to its parent maintains the invariant.

- Termination:
-					The loop terminates whenever the heap is exhausted or the max-heap property for A[i] and its parent is preserved. At the loop termination, A is a max-heap.

##6.5-6	Each exchange operation on line 5 of HEAP-INCREASE-KEY typically requires three assignments. Show how to use the idea of the inner loop of INSERTION-SORT to reduce the three assignments down to just one assignment.
```cpp
 	void Heap_Increase_Key(Heap A, int i, int key)
	{
		if (key < A.heap[i])
		{
			cerr << "New key is smaller —— ——!... " << endl;
		}
		while(i > 0 && A.heap[A.Parent(i)] < key)
 		
		{
			A.heap[i] = A.heap[A.Parent(i)];	/* Copy_From_Upper */
			i = A.Parent(i);					/* Move_Upwards */
		}
 		A.heap[i] = key;						/* Copy_From_Upper IN */
	}

```
##6.5-7	Show how to implement a first_in, first_out queue with a priority queue. Show how to implement a stack with a priority queue. (Queues and stacks are defined in Section 10.1.)
- Queue: Decreasing priority-queue.
- Stack: Increasing priority-queue.

##6.5-8	The operation HEAP-DELETE(A, i) deletes the item in node i from heap A. Give an implementation of HEAP-DELETE that runs in O(lg(n)) time for an n-element max-heap.
```cpp
	void Max_Heap_Delete(Heap A, int i)
	{
		A[i] = A[A.heap_size - 1];
		A.heap_size -= 1;
		Max_Heapify(A, i);
	}

	void Min_Heap_Delete(Heap A, int i)
	{
		A[i] = A[A.heap_size - 1];
		A.heap_size -= 1;
		Min_Heapify(A, i);
	}
```
##6.5-9	Give an O(nlg(k))-time algorithm to merge k sorted lists into one sorted list, where n is the total number of elements in all the input lists. (Hint: Use a min-heap for k-way merging.)
- <!-- Answers from the Web -->
- We take one element of each list and put it in a min-heap. 
- Along with each element we have to track which list we took it from. 

- When merging, we take the minimum element from the heap and insert another element off the list it came from (unless the list is empty). We continue until we empty the heap.

- We have n steps and at each step we're doing an insertion into the heap, which is lgk.

