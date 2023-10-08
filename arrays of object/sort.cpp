//Implement a C++ program to sort an array of objects of a user-defined class based on a specific criteria (e.g., age, name).

#include<iostream>
#include<string.h>
using namespace std;
class Student{
           public:
           string name;
           int rollno;
           int marks;
           public:
           void getdata()
           {
            cout<<endl<<"enter your roll no :";
            cin>>rollno;
            cout<<endl<<"enter your marks no :";
            cin>>marks;
            cout<<endl<<"enter your name  :";
            cin>>name;

           }
           void display()
           {
            cout<<endl<<"The name is :"<<name;
            cout<<endl<<"The marks is :"<<marks;
            cout<<endl<<"The roll no is :"<<rollno;
            
           }
};
int main()
{
  Student obj[3];
  for(int i=0;i<3;i++)
  {
    obj[i].getdata();
  }
  for(int i=0;i<3;i++)
  {
     if(strcmp(obj[i].name>obj[i+1].name))
     {

     
    obj[i].display();
     }
  }
  return 0;
}