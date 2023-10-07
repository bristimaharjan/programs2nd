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
		void sum(first x,first y)
		{
			int result;
			result=x.a+y.a;
			cout<<"The sum is: "<<result; 
		}
}obj1,obj2,obj3;
int main()
{
	obj1.getvalue();
	obj2.getvalue();
	obj3.sum(obj1,obj2);
	return 0;
}