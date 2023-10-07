#include <iostream>
using namespace std;
class Temp
{
private:
  float F;

public:
  Temp()
  {
    int c = 0;
    cout << "Enter celisus temperature"<<endl;
    cin>>c;
    F=(1.8*c)+32;
  }
  Temp(float c)
  {
    F=(1.8*c)+32;
  }
  Temp(Temp &obj)
  {
    F=obj.F;
  }
   void display()
  {
    cout << endl<<"the fahrenheit temperature is :";
    cout << F;
  }

};
int main()
{
  Temp obj;
  Temp obj1(36.7);
  Temp obj3=obj1;
    obj.display();
    obj1.display();
    obj3.display();
   return 0;

}