
#ifndef X_AND_Y
#define X_AND_Y

#include <iostream>

class Y;

class X
{
	Y * p = nullptr;
};

class Y
{
	X s;	
};

#endif