#include <iostream>

using namespace std;

//declaring a constant
//these cannot be changed after they have been declared
#define pi 3.1415926
#define months_in_year 12
//however do not use these in modern C++

int main()
{
    
    cout << "There are " << months_in_year << " in a year" << endl;
    cout << "Pi given as a decimal is " << pi << endl;

}
