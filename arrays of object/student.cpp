//Create a C++ class Student with data members for name, roll number, and marks. Create an array of Student objects and display their details.
#include<iostream>
using namespace std;
class Student{
           private:
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
    obj[i].display();
  }
  return 0;
}