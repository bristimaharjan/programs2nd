//Nested member function to calculate Simple Interest
#include<iostream>
using namespace std;
class SimpleInterest{
	private:
		float p,t,r,si;
	public:
		void getvalue()
		{
			cout<<"Enter Principal Time and Rate: ";
			cin>>p>>t>>r;
		}	
		float calculate()
		{
			si=(p*t*r)/100;
			return si;
		}
		void display()
			{
			cout<<"Simple Interest is: "<<calculate();
		}
		
}interest;
int main()
{
	interest.getvalue();
	interest.display();
	return 0;
}