//default constructor
#include<iostream>
using namespace std;
class Temp{
  private:
  float F;
  public:
  Temp()
  {
     float c;
     cout<<"Enter celsius temperature "<<endl;
     cin>>c;
     F=(1.8*c)+32;
  }
  void show()
  {
    cout<<"the fahrenheit temperature is :"<<endl;
    cout<<F;
  }
};
int main()
{
  
  Temp obj;
  obj.show();
  return 0;


}