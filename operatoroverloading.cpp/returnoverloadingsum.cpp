#include<iostream>
using namespace std;
class Sum{
    private:
    int a;
    int b;
    public:
    Sum(){
      a=5;
      b=5;
    }
    Sum operator ++ ()
    {
         Sum obj;
          obj.a=a+5;
          obj.b=b+5;
          return obj;

    }
    Sum operator ++ (int)
    {
      Sum obj;
      obj.a=a-5;
      obj.b=b-5;
      return obj;
    }
    void display()
    { 
     cout<<endl<<"value of a "<<a;
     cout<<endl<<"value of b"<<b;

    }
};
int main()
{
  Sum count,result;
  result= ++count;
  result.display();
  result=count++;
  result.display();
  return 0;
}
//In C++ we can change the way operators works for user  defined data types like objects and structures.
// ::,.,.*,?:,=,& cannot be overloaded.