#include<iostream>
using namespace std;
class Complex{
       private:
       int x=0;
       int y=0;

       public:
       Complex()
       {
         x=1;
         y=1;
       }
       Complex(int a,int b)
       {
               x=a+5;
               y=b+5;
       }
       Complex(Complex &obj )
       {
        x=obj.x;
        y=obj.y;
       }
       void display ()
       {
          cout<<endl<<"the complex no is :"<<x<<"+"<<y<<endl;
       }
};
int main()
{
  Complex obj;
  obj.display();
  Complex obj1(3,4);
  obj1.display();
  Complex obj2=obj1;
  obj2.display();
  return 0;

}