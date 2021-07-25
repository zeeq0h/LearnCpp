#include <iostream>
#include <string>
#include <climits>



int main()
{
/**************************************
        character types
***************************************/

char middle_initial {'J'}; //notice the single quotes - making " " would make it into a string
std::cout << "My middle initial is " << middle_initial << std::endl;

/**************************************
        integer types
***************************************/

unsigned short int exam_score {55}; //same as unsigned short exam_score {55};
std::cout << "My exam score was " << exam_score << std::endl;


int countries_represented {65};
std::cout << "There were " << countries_represented << " countries represented in my meeting" << std::endl;

long population_florida {20610000};
std::cout << "There are about " << population_florida << " people in Florida" << std::endl;

long long earth_population {7'600'000'000};
std::cout << "There are about " << earth_population << " people on Earth" << std::endl;

long earth_error = 7600000000; //this will print an error in the end result
std::cout << "There are about " << earth_error << " people on Earth" << std::endl;

long long distance_to_alpha_centauri {9'461'000'000'000};
std::cout << "Alpha Centauri is about " << distance_to_alpha_centauri << " kilometers" << std::endl;

/**************************************
        floating point types
***************************************/

float car_payment {403.23};
std::cout << "My car payment is " << car_payment << std::endl;

double pi {3.14159};
std::cout << "Pi is " << pi << std::endl;

long double large_amount {2.7e120};
std::cout << large_amount << " is a very big number" << std::endl;

/**************************************
        boolean types
***************************************/

bool game_over {false};
std::cout << "The value of game_over is " << game_over << std::endl;

/**************************************
        overflow examples
***************************************/

short value_1 {30000};
short value_2 {1000};
short product {value_1 * value_2};
std::cout << "The sum of " << value_1 << " and " << value_2 << " is " << product << std::endl;


} 
