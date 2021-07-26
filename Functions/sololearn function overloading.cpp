/*Overloading


Function overloading allows to create multiple functions with the same name, so long as they have different parameters.

For example, you might need a printNumber() function that prints the value of its parameter.
*/
#include <iostream>
using namespace std;

void printNum(int x) {
    cout << "Prints an int value " << x << endl;
}

void printNum(float x) {
    cout << "Prints a float value " << x << endl;
}

int main() {
    
    int a = 16;
    float b = 54.541;

    printNum(a);
    printNum(b);

    return EXIT_SUCCESS;
}