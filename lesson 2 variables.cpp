#include <iostream>
#include <string>

//global variables are variables declared outside the function and can be used anywhere/globally across the whole programn
int global_age (18);

int main() 
{
    int age; //uniinitialized
    age = 17;
    int age_two = 17; 
    int age_three (17);
    int age_four {17};
    std::cout << age << age_two << age_three << age_four << std::endl;

    int room_width;
    std::cout << "Enter the width of the` room: ";
    std::cin >> room_width;

    int room_length;
    std::cout << "Enter the length of the room: ";
    std::cin >> room_length;
    
    std::cout << "The area of the room is " << room_length * room_width << std::endl;

    //using strings here
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;

    std::cout << global_age;


    return 0;
}

int global_print() //this is an argument
{
    std::cout << global_age;

    return 0;
}