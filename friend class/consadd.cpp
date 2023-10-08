#include<iostream>
using namespace std;
class second;
class first{
   private :
   int x;
   
   public:
   first(int a)
   {
     x=a;
   }
   friend class second;
   
};
class second{
       private :
   int y;
   

   public:
   second(int b)
   {
    y=b;
   }
   
    void  sum()
    {
      first obj1(3);
      int sum;
     
      sum=  obj1.x+y;
      cout<<endl<<"Sum = :"<<sum;
    }
};
int main()
{
  second obj2(3);
  obj2.sum();
   
  return 0;
}