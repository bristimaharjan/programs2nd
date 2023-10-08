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
    cout<<"Enter y and x"<<endl;
    cin>>y;
   }
  
    void  Sum()
    {
      first obj;
  obj.getvalue();
        int sum;

     
      sum=  obj.x+y;
      cout<<endl<<"Sum = :"<<sum;
    }
};
int main()
{
  
  
  second b;
  b.getvalue();
  b.Sum();
   
  return 0;
}