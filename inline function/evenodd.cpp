//Design a program with an inline function to check if a given number is even or odd.
#include<iostream>
using namespace std;
inline void even_odd(int n){
          if(n%2==0)
          {
            cout<<endl<<"the given no "<<n<<" is even";
          }
          else
          {
            cout<<endl<<"the given no  "<<n<<" is odd";
          }
}
int main (){
  int no;
  cout<<endl<<"to check even or odd ";
  cout<<endl<<"enter a no ";
  cin>>no;
  even_odd(no);
  return 0;
}