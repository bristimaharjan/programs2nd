#include<iostream> 
using namespace std; 

/* local variable is same as a member's name */
class Test 
{ 
private: 
int x; 
public: 
void setX (int x) 
{ 
	
	this->x = x; // used to represent an object which revokes a member function;
    // it acts as a implicit parameter to all member function hence it is automatically passed to member function when it is called;
} 
 Test &setup(int a)
  {
    x = a;
    return *this;
  }
void print() { cout << "x = " << x << endl; } 
}; 

int main() 
{ 
Test obj; 
int x = 20; 
obj.setX(x); 
obj.setup(3);
obj.print(); 
return 0; 
} 
