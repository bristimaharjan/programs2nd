#include<iostream>
using namespace std;
class Temp{
  private:
  float F;
  public:
  Temp(float C)
  {
     F=(1.8*C)+32;
  }
  void show()
  {
    cout<<"the fahrenheit temperature is :"<<endl;
    cout<<F;
  }
};
int main()
{
  float c;
  cout<<"Enter celsius temperature "<<endl;
  cin>>c;
  Temp obj(c);
  obj.show();
  return 0;


}