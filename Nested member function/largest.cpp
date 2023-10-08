#include<iostream>
using namespace std;
class Great{
     private:
     int a;
     int b;
     public:
     void getvalue ()
     {
      cout<<endl<<"enter the value of a and b";
      cin>>a>>b;
     }
     void display (){
      cout<<endl<<"The largest value is :"<<largest();

     }
     int largest (){
      if(a>b)
      {
        return a;
      }
      else
      {
        return b;
      }
     }
};
int main()
{
  Great obj;
  obj.getvalue();
  obj.display();
  return 0;
}
//nesting of member function means that the member function can be called using using its name in another member function of the same class and it has a return type.