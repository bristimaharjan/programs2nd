#include<iostream>
using namespace std;

void Sum (int a,int b)
{
  int sum;
  sum=a+b;
  cout<<endl<<"Sum :"<<sum;
}
void Sum (int a,int b,int c)
{
   int sum;
  sum=a+b+c;
  cout<<endl<<"Sum :"<<sum;
}
int main()
{
  Sum(3,4,5);
  Sum(7,6);
  return 0;
}
//Function overloading in C++ we can have multiple function having same name but different parameterized list.parameterized list meaning data type,sequence of data.The main advantage is code reusibilty and code reversability;