/*
In C the maximum size of a int is 2^31 - 1, and 2^63 -1 for a long int

Let's do some calculations on very large integers.

Task
Read four numbers, , , , and , and print the result of .

Input Format
Integers , , , and  are given on four separate lines, respectively.

Constraints
1 <= a <= 1000
1 <= b <= 1000
1 <= c <= 1000
1 <= d <= 1000



Output Format
Print the result of a^b + c^d on one line.

Sample Input

9
29
7
27
Sample Output

4710194409608608369201743232  

NOTE: This result is bigger than 2^63 - 1 Hence, it won't fit in the long long int of C++ or a 64-bit integer.
*/

#include <iostream>
#include <cmath>
using namespace std;

unsigned long long int total = 0; //8bytes,	0 to 18,446,744,073,709,551,615

int calculateTotal(int a, int b, int c, int d)
{
    total = (pow(a, b) + pow(c, d));
    return total;
}

int main()
{
    //initialise variables
    int a,b,c,d = 0;


    //get input values
    cout << "Enter values of integers A,B,C and D " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    calculateTotal(a,b,c,d);

    cout << "The total value is" << endl << total << endl;
}