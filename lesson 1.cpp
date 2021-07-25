#include <iostream>

//this is a basic program that deals with inputs and outputs

/********************
this is multi line comments
kekw
make it into a cool header
********************/

int main() 
{
    int favourite_number;

    std::cout << "Enter your favourite number betweeen 1 and 100: " ;
    
    std::cin >> favourite_number;
    
    std::cout << "Amazing! Thats my favourite number too!" << std::endl;
    std::cout << "No really! " << favourite_number << " is my favourite number!" << std::endl;

    std::cout << &favourite_number << std::endl;
    // this is a pointer for the memory address of favourite_number

    
    double real_number;
    std::cin >> real_number;
    std::cout << real_number;

    return 0;
}