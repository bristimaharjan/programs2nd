#include<iostream>
using namespace std;
inline void volume (float a){
  float volume=0;
  volume=0.33*3.14*a*a*a;
  cout<<"the volume of sphere is : "<<volume<<endl;
}
int main()
{
  float r=0;
  cout<<"enter the radius "<<endl;
  cin>>r;
  volume(r);
  return 0;
}