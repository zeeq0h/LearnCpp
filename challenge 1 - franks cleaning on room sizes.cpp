/*setup franks cleaning service for large and small rooms, calculate cost per room and total cost with tax
02/09/20*/

#include <iostream>

using namespace std;

int main()
{
    int large_rooms {0};
    int small_rooms {0};

    cout << "How many large rooms would you liked cleaned? : " << endl;
    cin >> large_rooms;
    cout << "How many small rooms would you liked cleaned? : " << endl;
    cin >> small_rooms;

    const double price_per_large {35.0};
    const double price_per_small {25.0};
    const double sales_tax {0.06}; //6%
    const int estimate_expiry {30}; //days

    cout << "The number of large rooms is " << large_rooms << endl;
    cout << "The number of small rooms is " << small_rooms << endl;
    cout << "The cost per large room is $" << price_per_large << " and the price per small is $" << price_per_small << endl;
    cout << "The cost of cleaning is: $" << (large_rooms * price_per_large) + (small_rooms * price_per_small) << endl;
    cout << "The cost of tax is $" << ((large_rooms * price_per_large) + (small_rooms * price_per_small)) * sales_tax << endl;

    cout << "================================================" << endl;
    cout << "The total cost of cleaning is $ " << (large_rooms * price_per_large) + (small_rooms * price_per_small) + (((large_rooms * price_per_large) + (small_rooms * price_per_small)) * sales_tax ) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days.";

    
    cout << endl;
    return 0;
    

    
}

