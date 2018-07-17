#include <iostream>
#include <vector>

using namespace std;

class Heap
{
public:
	/* Initializations */
	Heap(int i) : heap(i), heap_size(heap.size()), length (heap.max_size()) {}
	Heap() = default;
	
	/* Operations */
	int Parent(unsigned i)	{	return i >> 1;}
	int Left(unsigned i)	{	return i << 1;}
	int Right(unsigned i)	{	return (i << 1) + 1;}

	void exchange(Heap A, int i, int j){
		int temp;
		temp = A.heap[i];
		A.heap[i] = A.heap[j];
		A.heap[j] = temp;
	}

	int find_largest(Heap A, int i, int l, int r){
		int largest = i;
		
		if (l <= A.heap_size && A.heap[i] < A.heap[l])
		{
			largest = l;
		}
		if (r <= A.heap_size && A.heap[largest] < A.heap[r])
		{
			largest = r;
		}

		return largest;
	}
	int find_smallest(Heap A, int i, int l, int r){
		int smallest = i;

		if (l <= A.heap_size && A.heap[l] < A.heap[i])
		{
			smallest = l;
		}
		if (r <= A.heap_size && A.heap[r] < A.heap[smallest])
		{
			smallest = r;
		}

		return smallest;
	}

	void Max_Heapify(Heap A, int i){	
		/* First, find the largest INDEX .*/
		int largest;
		int l = Left(i);
		int r = Right(i);

		largest = find_largest(A, i, l, r);
		if (largest != i)
		{
			exchange(A, largest, i);	/* Change the VALUE. NOT the index. */
		}
		Max_Heapify(A, largest);	/* A[largest] now contains the SMALLER value. */
	}

	void Min_Heapify(Heap A, int i){
		/* First, find the largest INDEX .*/
		int smallest;
		int l = Left(i);
		int r = Right(i);

		smallest = find_smallest(A, i, l, r);
		if (smallest != i)
		{
			exchange(A, smallest, i);	/* Change the VALUE. NOT the index. */
		}
		Max_Heapify(A, smallest);	/* A[smallest] now contains the larger value. */
	}

	void Build_Max_Heap(Heap A)
	{
		A.heap_size = A.length;
		for (int i = A.heap_size/2 ; i >= 0; --i)
		{
			Max_Heapify(A, i);
		}
	}
	void Heap_Sort(Heap A)
	{
		Build_Max_Heap(A);
		for (int i = A.length ; i >= 1 ; ++i)
		{
			exchange(A, 1, i);
			--A.heap_size;
			Max_Heapify(A, 1);
		}
	}


	vector<int> heap;
	unsigned heap_size = heap.size();
	unsigned length = heap.max_size();
};