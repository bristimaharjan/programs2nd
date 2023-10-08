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
 Complex sum(Complex obj1)//passing obj as parameter and returning object.
 {
    Complex obj3;
    obj3.x=obj1.x;
    obj3.y=obj1.y;
    return obj3;
 }
};
int main()
{
  Complex obj1,obj2,result;
  obj1.getdata(3,4);
  obj1.display();
  result=obj2.sum(obj1);
  result.display();
  return 0;

}