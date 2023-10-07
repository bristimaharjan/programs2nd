//3.	Design a C++ program with a function that calculates the total cost of a product with default arguments for quantity and unit price.
#include<iostream>
using namespace std;
int calculate(int q=1,int u=100);
int main()
{
	int total=0;
	int n=0;
	cout<<"enter how many quantity do you want: "<<endl;
	cin>>n;
	total=calculate( n, 100);
	cout<<"total= "<<total;
	return 0;
}
int calculate(int m,int p)
{
	int a=0;
	a=m*p;
	return a;
}