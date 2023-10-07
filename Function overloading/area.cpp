#include<iostream>
using namespace std;
void perimeter(int r){
 int circle;
 circle=(3.14)*r*r;
 cout<<"circle perimeter :"<<circle<<endl;
}
void perimeter(float a){
   float square;
   square=4*a;
   cout<<"Square area :"<<square;
}
int main()
{
  perimeter(3);
  perimeter(6.7);
  return 0;
}