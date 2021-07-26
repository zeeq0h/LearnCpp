//if C++ data types are different, C++ will try to convert one of these into a matching type
//this could cause errors in calculations
//if this conversion (coercion) cannot occur the compiler will throw an error

//this coercion is either through promotion or demotion
//promoting a datatype to a higher datatype e.g int > float

#include <iostream>
using namespace std;

int main()
{
    int total_amount {100};
    int total_number {8};
    double average {0.0};

    average = total_amount / total_number;
    cout << average << endl;    //displays 12

    average = static_cast<double>(total_amount) / total_number;
    cout << average << endl;    //displays 12.5

    return EXIT_SUCCESS;
}

