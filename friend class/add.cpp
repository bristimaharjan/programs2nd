#include<iostream>
using namespace std;
class second;
class first{
   private :
   int x;
   
   public:
   void getvalue()
   {
    cout<<"Enter x"<<endl;
    cin>>x;
   }
   friend class second;
   
};
class second{
       private :
   int y;
   

   public:
   void getvalue()
   {
    cout<<"Enter y"<<endl;
    cin>>y;
   }
   
    void  sum()
    {
      first obj;
      int sum;
     
      sum=  obj.x+y;
      cout<<endl<<"Sum = :"<<sum;
    }
};
int main()
{
  first obj;
  obj.getvalue();
  second b;
  b.getvalue();
  b.sum();
   
  return 0;
}