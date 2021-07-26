/*Section 7 challenge

write the c++ program as follows:

declare 2 empty vectors of integers 
named vector1 and vector2 respectively

add integers 10 and 20 to vector1 dynamically using pushback
display the elements of vector1 using .at and also display its size using the .size() method

add integers 100 and 200 to vector2 dynamically using pushback
display the elements of vector2 using .at and also display its size using the .size() method

declare an empty 2D vector named vector_2D

add vector1 to vector_2D dynamically using pushback
add vector2 to vector_2D dynamically using pushback

display the elements in vector_2D using the .at() method

change vector1.at() to 1000


*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vector_one{};
    vector <int> vector_two{};

    //displaying information on vector_one
    vector_one.push_back(10);
    vector_one.push_back(20);

    cout << vector_one.at(0) << endl;
    cout << vector_one.at(1) << endl;
    cout << vector_one.size() << endl;

    //displaying information on vector_two
    vector_two.push_back(100);
    vector_two.push_back(200);

    cout << vector_two.at(0) << endl;
    cout << vector_two.at(1) << endl;
    cout << vector_two.size() << endl;

    cout << endl;
    //creating a 2D vector
    cout << "\nTwo dimensional Vectors" << endl;
    vector <vector<int>> vector_2D{};

    vector_2D.push_back(vector_one);
    vector_2D.push_back(vector_two);

    cout << vector_2D.at(0).at(0) << endl;
    cout << vector_2D.at(0).at(1) << endl;
    cout << vector_2D.at(1).at(0) << endl;
    cout << vector_2D.at(1).at(1) << endl;

    vector_one[0] = 1000;
    cout << vector_one.at(0) << endl;





    cout << endl;
    return 0;
}