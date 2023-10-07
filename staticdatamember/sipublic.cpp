//calculate simple interest using public static data member

#include <iostream>
using namespace std;
class interest{
   public:
     float p;
     float t;
     static float r;
    void getdata(){
        cout<<"Enter the value of p and t: "<<endl;
        cin>>p>>t;
    }
     void calculate(){
        cout<<(p*t*r)/100;
    }
};
float interest::r=8;

int main() {
   interest si[3];
   int i=0;
   for(i=0;i<3;i++)
   {
    cout<<"Enter principle and interest for "<<i+1<<" is "<<endl;       
   si[i].getdata();
   }
    for(i=0;i<3;i++){
   cout<<"the simple interest of "<<i+1<<" is "<<endl;
   interest::r;
   si[i].calculate();
    }
   
    return 0;
}