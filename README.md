# Collection of useful C++ tutorials

## How to download or clone the repository
### Cloning using git:
`git clone https://github.com/zeeq0h/LearnCpp`
### Downloading the repository as a .zip folder
[Download here](https://github.com/zeeq0h/LearnCpp/archive/refs/heads/master.zip)
or copy and paste this link into your browser `https://github.com/zeeq0h/LearningCpp/archive/refs/heads/master.zip`

## Order of completion
I would recommend reading each section in the following order:
1. Variables and Arrays
2. Expressions
3. Functions
4. TBC

Any files outwith a folder are recently added files and will be dealt with in due time.

## Learning resources

### Leaned by using various sources such as:
1. [Udemy C++ Course](https://www.udemy.com/course/free-learn-c-tutorial-beginners/learn/lecture/3761044?start=0#overview)
2. [Sololearn](https://www.sololearn.com)
3. [LearnCpp](https://www.learncpp.com)
4. [HackerRank](https://www.hackerrank.com)
5. [C++ Primer](http://ptgmedia.pearsoncmg.com/images/9780321714114/samplepages/0321714113.pdf)

### Other useful resources
1. [Compiling with G++](https://www.geeksforgeeks.org/compiling-with-g-plus-plus/)
2. [Using git](https://www.w3schools.com/GIT/default.asp)

## Challenges
### 1. Palindrome numbers

A palindromic number is a number (such as 626) that remains the same when its digits are reversed.
Write a function that returns true if a given number is a palindrome, and false, if it is not.
Complete the given function, so that the code in main works and results in the expected output.

Sample Input:
13431
Sample Output:
13431 is a palindrome

### 2. Find the largest value of an array

Given an array of n integers, sort them so that n integers are into increasing size
Sample Input:
4
1 8 15 3
Sample Output:
1 3 8 15

### 3. Integers come in all sizes

In C the maximum size of a int is 2^31 - 1, and 2^63 -1 for a long int

Let's do some calculations on very large integers.

Task
Read four numbers, , , , and , and print the result of .

Input Format
Integers , , , and  are given on four separate lines, respectively.

Constraints:
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

