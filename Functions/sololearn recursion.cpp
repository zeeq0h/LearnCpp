//A recursive function is a C++ function that calls itself.
//However to avoid having the recursion run indefinitely, you must include a termination condition.

//example in maths
//4! = 4 * 3 * 2 * 1 = 24

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n==1) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

int main() {
    cout << factorial(5);
}