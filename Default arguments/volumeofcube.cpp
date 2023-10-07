//1.	Create a C++ function that calculates the volume of a cube with default arguments for length, width, and height.
#include <iostream>
using namespace std;
int calculate(int l=1,int b=2,int h=3);
int main()
{
	int volume;
	volume=calculate();
	cout<<"volume= "<<volume;
	return 0;
}
int calculate(int m,int n,int o)
{
	int v=0;
	v=m*n*o;
	return v;
}