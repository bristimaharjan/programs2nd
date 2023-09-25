//Write a C++ program to calculate the factorial of a number using an inline function.

#include<iostream>
using namespace std;
 inline void fact(int n){
  int product=1;
  for(int i=1;i<=n;i++)
  {
    product=product*i;
  }
  cout<<endl<<"the factorial of the no is :"<<product;
}
int main()
{
  int no;
  cout<<endl<<"Enter the factorial you wish";
  cin>>no;
  fact(no);
  return 0;
}