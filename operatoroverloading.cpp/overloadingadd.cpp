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
    void operator ++ ()
    {
          a=a+5;
          b=b+5;

    }
    void operator ++ (int)
    {
      a=a-5;
      b=b-5;
    }
    void display()
    { 
     cout<<endl<<"value of a "<<a;
     cout<<endl<<"value of b"<<b;

    }
};
int main()
{
  Sum count;
  ++count;
  count.display();
  count++;
  count.display();
  return 0;
}
//In C++ we can change the way operators works for user  defined data types like objects and structures.
// ::,.,.*,?:,=,& cannot be overloaded.