#include<iostream>
using namespace std;
class Num{
  public:
  Num(){
     
       cout<<endl<<"constructor called";

  }
  ~ Num(){
     
       cout<<endl<<"Destructor called";

  }

};
int main()
{
  Num obj;
   {
    cout<<endl<<"new objects";
     Num obj1;
   }
  return 0;
}
