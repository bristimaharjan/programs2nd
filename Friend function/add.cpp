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
   friend void add(first,second);
   
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
   friend void add(first,second);
};
   
void add(first a,second b)
{
  int sum;
  sum=a.x+b.y;
  cout<<endl<<"the sum is :"<<sum;


}
int main()
{
  first obj1;
  obj1.getvalue();
  second obj2;
  obj2.getvalue();
  add(obj1,obj2);
  return 0;
}