/* An array can also be passed to a function as an argument.
The parameter should be defined as an array using square brackets, when declaring the function.
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int x=0; x<size; x++) {
        cout << arr[x];

    }
}

int main()
{
    int myArr[3] = {42, 33, 88};
    printArray(myArr, 3);

}