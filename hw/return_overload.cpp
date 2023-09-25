//return value from operator ++
#include<iostream>
using namespace std;
class Complex{
  private:
  int x;
  int y;
  public:
  Complex(){
    x=5;
    y=5;
  }
  Complex operator ++(){
    Complex obj1;
    obj1.x=x+5;
    obj1.y=y+6;
    return obj1;

  }
  Complex operator ++ (int){
    Complex obj1;
    obj1.x=x+10;
    obj1.y=y+10;
    return obj1;

  }
  void display()
  {
    cout<<endl<<"the complex number is :"<<x<<"+"<<y<<"i";
  }


};
int main()
{
  Complex count1,result;
  result=++count1;
  result.display();
  result=count1++;
  result.display();
  return 0;

}