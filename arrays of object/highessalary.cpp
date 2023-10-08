#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;
    int bonus;
    public:
    void getdata(){
      cout<<endl<<"Enter salary :";
      cin>>salary;
      cout<<endl<<"Enter bonus :";
      cin>>bonus;
    }
    friend void display(int,Employee []);
}E[10];
int main()
{
  int n;
  cout<<endl<<"How many no of employee you wish ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cout<<endl<<"employee information :"<<i+1<<endl;
    E[i].getdata();

  }
  display(n,E);
  return 0;
}
void display(int no,Employee e[])
{
  int gt;
  Employee he;
  for(int i=0;i<no;i++)
  {
        if(e[i].salary>gt)
        {
              gt=e[i].salary;
              he=e[i];
        }
        
  }
  cout<<endl<<"The employee with highest salary ";
  
    cout<<endl<<"the basic salary is :"<<he.salary;
    cout<<endl<<"the bonus is :"<<he.bonus;
}