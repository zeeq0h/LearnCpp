//franks carpet cleaning service

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, welcome to Frank's carpet cleaning service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";

    int number_of_rooms {0};

    cin >> number_of_rooms;

    const double price_per_room {30.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30};//days


    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << 30 << endl;

    cout << "Cost:$" << price_per_room * number_of_rooms << endl;
    cout << "Tax:$" << price_per_room * number_of_rooms * sales_tax << endl;

    cout << "=============================" << endl;
    int total_cost {0};
    total_cost = (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax);

    cout << "Total estimate: $" << total_cost << endl;
    cout << "This estimate is valid for " << estimate_expiry << endl;
    
    cout << endl;
    return 0;
    
}
