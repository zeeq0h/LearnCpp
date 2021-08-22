/*
A private member cannot be accessed, or even viewed, from outside the class; it can be accessed only from within the class.
A public member function may be used to access the private members. For example:
*/

#include <iostream>
#include <string>
using namespace std;

class myClass {
    public:
        string name;
};

int main() {
    myClass myObj;
    myObj.name = "SoloLearn";
    cout << myObj.name;
    return 0;
}