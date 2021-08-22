/* A private member cannot be accessed, or even viewed, from outside the class; it can be accessed only from within the class.
A public member function may be used to access the private members. For example:
*/

#include <iostream>
#include <string>
using namespace std;

class myClass {
  public:

    void setName(string x) {
      name = x;
    }
    //We can add another public method in order to get the value of the attribute.

    string getName() {
      return name;
    }
    
  private:
    string name;
};

int main() {
    myClass myObj;
    myObj.setName("John");

    return 0;
}