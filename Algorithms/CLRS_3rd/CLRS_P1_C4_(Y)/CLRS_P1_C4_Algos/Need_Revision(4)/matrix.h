#include <iostream>
#include <memory>

class matrix
{
public:/*You gotta learn the "allocator" of C++ for this class*/
	matrix(int i, int j)
	{
		int A[i][j];
		return A;
	}

};