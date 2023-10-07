//to overload operator ++ by prefix and postfix
#include<iostream>
using namespace std;
class Complex{
  private:
  int x;
  int y;

  public:
  Complex(){
    x=5;
    y=7;
  }
  void operator ++(){
    x=x+5;
    y=y+5;
  }
   void operator ++(int){
    x=x+5;
    y=y+5;
  }
  void display()
  {
    cout<<"the complex number after addition is :"<<x<<"+"<<y<<"i"<<endl;
  }
};
int main()
{
  Complex obj;
  ++obj;
  obj.display();
  obj++;
  obj.display();
  return 0;


}