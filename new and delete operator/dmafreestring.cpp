//Implement a C++ program that allocates memory for a string on the heap using new and deallocates it using delete.
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string* dynamicString = new string("Hello, World!");

  

       
        cout << *dynamicString << std::endl;

    
        delete dynamicString;
    
    return 0;
}

