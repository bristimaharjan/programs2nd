// Program to calculate Simple interest by using static variable as a private access specifier.
#include"iostream"
using namespace std;
class calc{
	private:
		int principal;
		int time;
		static int rate;
	public:
		
		void getdata(){
			cout<<endl<<"Enter principal and time : ";
			cin>>principal>>time;
		}
		void interest(){
			cout<<(principal * rate * time)/100;
		}
};
int calc :: rate = 8;
int main()
{
	calc obj[3];
	for(int i=0;i<3;i++)
	{
		cout << endl<< "Taking Data For person "<<i+1;
		obj[i].getdata();
	}
	for(int i=0;i<3;i++)
	{
		cout<<endl<<"Simple Interest of person "<<i+1<< " is ";
		obj[i].interest();
	}
	return 0;
}