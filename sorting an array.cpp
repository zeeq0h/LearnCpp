/*
Given an array of n integers, sort them so that n integers are into increasing size
Sample Input:
4
1 8 15 3
Sample Output:
1 3 8 15
*/

#include <iostream>
//#include <array>
using namespace std;

int main()
{
    int n; //setup a integer to manage the size of the array
    cout << "Enter the size of the array ";
    cin >> n;

    int array[n];

    for(int i=0; i < n; i++)
    {
        cin >> array[i];
    }

    for(int i=0; i < n; i++)
    {
        if(array[i] > array[i+1])
        {

        }
    }

    //TODO: Need to implement the sorting algorithm for the array

    return 0;
}
