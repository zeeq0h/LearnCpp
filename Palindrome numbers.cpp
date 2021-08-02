/* CHALLENGE DETAILS

Palindrome Numbers


A palindromic number is a number (such as 626) that remains the same when its digits are reversed.
Write a function that returns true if a given number is a palindrome, and false, if it is not.
Complete the given function, so that the code in main works and results in the expected output.

Sample Input:
13431

Sample Output:
13431 is a palindrome
*/

#include <iostream>
using namespace std;

bool isPalindrome(int x){
    //complete the function
    int givenNumber, copyNumber = x; //number given by the user
    int currentDigit, reversedNumber = 0; 

    do {
        currentDigit = copyNumber % 10; //takes the remainder
        reversedNumber = (reversedNumber * 10) + currentDigit; //creating the reversed number
        copyNumber = copyNumber / 10; //creating a new number
    }
    while(copyNumber != 0);
    return reversedNumber;
}

int main() {
    int n;
    cout << "Please enter the number to be checked if it is a palindrome or not ";
    cin >> n;

    if(isPalindrome(n)) {
        cout << n << " is a palindrome";
    }
    else {
        cout << n << " is not a palindrome";
    }

    return 0;
}