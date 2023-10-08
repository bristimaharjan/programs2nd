#include<iostream>
using namespace std;
class Complex{
 private:
 int x;
 int y;
 public:
 void getdata (int a,int b)//passing normal parameter
 {
  x=a;
  y=b;
 }
 void display()
 {
     cout<<endl<<"the complex no is :"<<x<<"+"<<y<<"i"<<endl;
 }
 void sum(Complex obj1)//passing obj as parameter complex or class as data type
 {
    x=obj1.x;
    y=obj1.y;
 }
};
int main()
{
  Complex obj1,obj2;
  obj1.getdata(3,4);
  obj1.display();
  obj2.sum(obj1);
  obj2.display();
  return 0;

}