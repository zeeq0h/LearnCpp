/*
When creating an object, you now need to pass the constructor's parameter, as you would when calling a function:
*/

#include <iostream>
#include <string>
using namespace std;

class myClass {
    public:
        myClass(string nm) {
            setName(nm);
        }

        void setName(string x) {
            name = x;
        }
        
        string getName() {
            return name;
        }

    private:
        string name;
};

int main() {
    myClass ob1("David");
    myClass ob2("Amy");
    cout << ob1.getName();
}

/* We've defined two objects, 
and used the constructor to pass the initial value for the name attribute for each object.
*/