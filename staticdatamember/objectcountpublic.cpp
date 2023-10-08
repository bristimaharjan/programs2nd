#include<iostream>
using namespace std;
class Book{
       private:
       string book;
       
       public:
       static  int count;
       Book()
       {
        count++;
       }
       void getdata(){
        cout<<endl<<"enter book name :";
        cin>>book;
       }
      
       
    
       

};
int Book ::count=0;
int main()
{
 Book b1,b2,b3;
 b1.getdata();
 b2.getdata();
 b3.getdata();
 cout<<endl<<"the total no of books is :"<<Book::count;
 return 0;
}