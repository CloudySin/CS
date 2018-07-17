#include <iostream>

using namespace std;

void Merge(int A[], int aux[], int lo, int mid, int hi);

void Merge_Sort(int A[], int aux[], int lo, int hi)
{
	if (lo < hi)
	{
		int mid = (lo + hi)/2;
		Merge_Sort(A, aux, lo, mid);
		Merge_Sort(A, aux, mid+1, hi);
		Merge(A, aux, lo, mid, hi);
	}
}

void Merge(int A[], int aux[], int lo, int mid, int hi)
{
	for (int i = 0; i <= hi; ++i)/*Caution " <= " here*/
	{
		aux[i] = A[i];
	}
	int i = lo, j = mid+1;
	for (int k = lo; k <= hi; k++)/*Caution " <= " here*/
	{
		if(i > mid)						A[k] = aux[j++];
		else if(j > hi)					A[k] = aux[i++];/*Caution ELSE here!!!*/
		else if(aux[i] < aux[j])		A[k] = aux[i++];/*Caution ELSE here!!!*/
		else							A[k] = aux[j++];
	}
}

int main(int argc, char const *argv[])
{
	int A[] = {1,2,3,5,4,6,7,8,9,10,12,11,13,15,14};
	int aux[sizeof(A)/sizeof(A[0])];
	Merge_Sort(A, aux, 0, sizeof(A)/sizeof(A[0])-1);	/*Caution " -1 " here*/
	for (int i = 0; i < sizeof(A)/sizeof(A[0]); ++i)	cout << A[i] << endl;
	return 0;
}