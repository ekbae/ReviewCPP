//Compare_Parameter and Argument

#include <iostream>

using namespace std;

int foo(int x, int y);

int foo(int x, int y) //Parameters
{
	return x+y;
}// x, y are destroyed here

int main()
{
	int x= 1, y = 2;

	foo(6,7); //6, 7 are arguments (actual parameters) in Korean, InJA
	foo(x,y+1);

	return 0;
}


