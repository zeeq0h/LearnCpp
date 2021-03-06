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
    //this is called an access specifier.
    string getName() {
      return name;
    }

  private:
    string name;
};

int main() {
    myClass myObj;
    myObj.setName("John");

    cout << myObj.getName(); //we can now access the private name with our access indentifier.

    return 0;
}