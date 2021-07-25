//increment operator ++
//decrement operator --

//prefix ++num
//postfix num++

//dont overuse this operator

#include <iostream>
using namespace std;

int main()
{
    int counter{10};
    int result{0};

    //simple increment
    cout << "Counter: " << counter << endl;

    counter = counter + 1;
    cout << "Counter: " << counter << endl;

    counter++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;

}