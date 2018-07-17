#include <iostream>
#include "../Heapsort/Heap_Operations.h"

using namespace std;

class Priority_Queue
{
public:
	Priority_Queue();
	~Priority_Queue();
	
	/* Max_Priority_Queue */
	int Heap_Maximum(Heap A)
	{
		return A.heap[0];
	}

	void Heap_Extract_Maximum(Heap A)
	{
		if (A.heap_size < 1)
		{
			cerr << "Heap underflow~" << endl;
		}
		int max = A.heap[0];
		A.heap[0] = A.heap[A.heap_size - 1];
		A.Max_Heapify(A, 1);
	}

	void Heap_Increase_Key(Heap A, int i, int key)
	{
		if (key < A.heap[i])
		{
			cerr << "New key is smaller —— ——!... " << endl;
		}

		while(i > 0 && A.heap[A.Parent(i)] < key)
		{
			A.heap[i] = A.heap[A.Parent(i)];
			i = A.Parent(i);
		}
		A.heap[i] = key;
	}

	void Max_Heap_Delete(Heap A, int i)
	{
		A[i] = A[A.heap_size - 1];
		A.heap_size -= 1;
		Max_Heapify(A, i);
	}
	
	void Max_Heap_Insert(Heap A, int key)
	{
		++A.heap_size;
		A.heap[A.heap_size] = -0xffffffff;/*  Memory linkeages here */
		Heap_Increase_Key(A, A.heap_size, key);/*  Memory linkeage here */
	}

	/* Min_Priority_Queue */
	int Heap_Minimum(Heap A)
	{
		return A.heap[0];
	}

	void Heap_Extract_Minimum(Heap A)
	{
		if (A.heap_size < 1)
		{
			cerr << "Heap underflow~" << endl;
		}
		int min = A.heap[0];
		A.heap[0] = A.heap[A.heap_size - 1];
		A.Min_Heapify(A, 1);
	}

	void Heap_Decrease_Key(Heap A, int i, int key)
	{
		if (key > A.heap[i])
		{
			cerr << "New key is larger —— ——!... " << endl;
		}
		A.heap[i] = key;
		while(i > 0 && A.heap[A.Parent(i)] > A.heap[i])
		{
			A.exchange(A, i, A.Parent(i));
			i = A.Parent(i);
		}
	}

	void Min_Heap_Delete(Heap A, int i)
	{
		A[i] = A[A.heap_size - 1];
		A.heap_size -= 1;
		Min_Heapify(A, i);
	}
	
	void Min_Heap_Insert(Heap A, int key)
	{
		++A.heap_size;
		A.heap[A.heap_size] = -0xffffffff;/*  Memory linkeages here */
		Heap_Decrease_Key(A, A.heap_size, key);/*  Memory linkeage here */
	}
};