#include<iostream>
using namespace std;
class Book{
       private:
       string book;
       static  int count;
       public:
       Book()
       {
        count++;
       }
       void getdata(){
        cout<<endl<<"enter book name :";
        cin>>book;
       }
       static void display()
       {
            cout<<endl<<"The total number of books :"<< count;
       }

};
int Book ::count=0;
int main()
{
 Book b1,b2,b3;
 b1.getdata();
 b2.getdata();
 b3.getdata();
 Book::display();
 return 0;
}