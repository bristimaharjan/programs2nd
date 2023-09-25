//Implement an inline function in C++ to compute the area of a rectangle with user-defined input.

#include<iostream>
using namespace std;
inline void rectangle(int l,int b){
  int area;
  area=l*b;
  cout<<endl<<"the area of rectangle is :"<<area;

}
int main(){
  int len,breadth;
  cout<<endl<<"enter length and breadth of the rectangle";
  cin>>len>>breadth;
  rectangle(len,breadth);
  return 0;



}