//Write a C++ program that dynamically allocates memory for an integer using the new operator and then frees it using the delete operator.
#include<iostream>
using namespace std;
int main()
{
  int *p;
  p=new int;
  *p=8;
  cout<<endl<<"the value of p is "<<*p;
  delete p;
  return 0;

}
