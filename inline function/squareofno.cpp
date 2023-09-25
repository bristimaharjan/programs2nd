//Create an inline function in C++ to find the square of a number and display the result.

#include<iostream>
#include<math.h>
using namespace std;
inline void square (int no){
   int s;
   s=pow(no,2);
   cout<<endl<<"the square root of the given no : "<<s;
}
int main()
{
  int n;
  cout<<endl<<"enter the square of no you wish ";
  cin>>n;
  square(n);
  return 0;
}