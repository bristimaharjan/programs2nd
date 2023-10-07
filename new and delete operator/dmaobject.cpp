#include <iostream>
using namespace std;

class Student {
  private:
    int id;

  public:

 
    Student() {
      id=id+5;
    }

    void getId() {
      cout << "Id = " << id << endl;
    }
};

int main() {

  Student* ptr = new Student();

 
  ptr->getId();

  
  delete ptr;

  return 0;
}
