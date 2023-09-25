#include<iostream>
using namespace std;
int main()
{
  int x=0;
  float y=9.88,z=0;
 // x=int(y);
  x=(int)y;
  cout<<"the int value of x is "<<x;//loss of data 
  z=y;
  cout<<endl<<"value without loss of data"<<z;

  return 0;

}