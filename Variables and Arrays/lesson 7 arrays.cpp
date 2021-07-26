#include <iostream>

//an array is used to store multiple data values of the same variable type

//HOWEVER ARRAYS ARE A FIXED WHILE THE PROGRAM IS RUNNING

//this code would become
int main()
{

int test_score_one {80};
int test_score_two {72};
int test_score_three {55};
//this statement above can be simpliefied in the one below 

int test_scores [3] {80,72,55};
std::cout << test_scores << std::endl;

int high_score_per_level [10] {3,5}; //initialize to 3, 5 and the rest remain at 0
std::cout << high_score_per_level << std::endl;

const int days_in_year {365};
int hi_temperatures [days_in_year] {0}; //initialize all values to 0
std::cout << hi_temperatures << std::endl;

int test_array [] {1,2,3,4,5}; //the size of this array is automatically calculated for us
std::cout << test_array << std::endl;

//HOWEVER WHEN COUT THESE ARRAYS WE GET A MEMORY LOCATION AS NO SPECIFIC VALUE IS BEING CALLED FOR 
std::cout << test_array << std::endl;
return 0;

}
