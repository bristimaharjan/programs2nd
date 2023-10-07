
//4.	Write a C++ program with a function that calculates the area of a circle with a default argument for radius
#include<iostream>
using namespace std;
void area(int r=6);
int main()
{
  area (3);
  return 0;
}
void area(int a)
{
  int circle;
  circle=(3.14)*a*a;
  cout<<endl<<"the area of circle is :"<<circle;

}
//default arguments allows us to set the default value of the function parameter .When passing the parameter if no value is passed then default arguments are automatically utilized and if arguments are  passed they are ignored.