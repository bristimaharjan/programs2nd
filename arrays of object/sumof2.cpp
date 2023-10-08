#include<iostream>
using namespace std;
class Sum{
 private:
 int x;
 int y;
 public:
 void getdata (int a,int b)//passing normal parameter
 {
  x=a;
  y=b;
 }

   void sum(Sum obj1,Sum obj2)//passing obj as parameter and returning object.
 {
    Sum obj3;
    obj3.x=obj1.x+obj2.x;
    obj3.y=obj1.y+obj2.y;
    cout<<endl<<"the sum of no is :"<<obj3.x<<"+"<<obj3.y<<"="<<obj3.x+obj3.y <<endl;

 }
};
int main()
{
  Sum obj1,obj2,obj3;
  obj1.getdata(3,4);
  obj2.getdata(4,3);

  obj3.sum(obj1,obj2);

  return 0;

}