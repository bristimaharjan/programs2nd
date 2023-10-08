#include<iostream>
using namespace std;
class Si{
      private:
      float p;
      float t;
      static float r;
      public:
      static void rate(){
        cout<<endl<<"enter rate :";
        cin>>r;
      }    
     void getdata(){
        cout<<"Enter the value of p and t: "<<endl;
        cin>>p>>t;
    }
     void calculate(){
        cout<<(p*t*r)/100;
    }
};
float Si::r;
int main()
{
 Si obj[3];
 Si::rate();
 for(int i=0;i<3;i++)
 {
    cout<<endl<<"Enter the principal and time  for "<<i+1<<endl;
    obj[i].getdata();
 }
 for(int i=0;i<3;i++)
 {
     cout<<endl<<"The simple interest for "<<i+1<<endl;
     obj[i].calculate();
 }
 return 0;
}
