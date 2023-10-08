//Add two numbers passing two object as a parameters
#include<iostream>
using namespace std;
class first{
	private:
		int a;
	public:
		void getvalue()
		{
			cout<<"Enter num: ";
			cin>>a;
		}
		first sum(first x,first y)
		{
			first sum;
			sum.a=x.a+y.a;
     return sum;
		}
		void display()
		{
		
			cout<<"the sum :"<<a;
		}
}obj1,obj2,obj3,result;
int main()
{
	obj1.getvalue();
	obj2.getvalue();
	result=obj3.sum(obj1,obj2);
	result.display();
	return 0;
}