//Create a C++ program that dynamically allocates an array of integers using new[] and releases the memory using delete[].
#include<iostream>
using namespace std;
int main()
{
  int n;
  int *ptr;
  cout<<"enter any size of array you wish "<<endl;
  cin>>n;
  ptr=new int[n];
  for(int i=0;i<n;i++)
  {
    cout<<endl<<"enter value of "<<i+1;
    cin>>*(ptr+i);

  }
  for(int i=0;i<n;i++)
  {
    cout<<endl<<"value of "<<i+1<<" is "<<*(ptr+i);

  }
  delete[] ptr;
  return 0;
}