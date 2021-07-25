#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    //your code goes here

    for (int i = 0; i < n; i++) {

        if (i % 5 == 0) {
            cout <<  "Beep" << endl;
        }
        else {
            cout << i << endl;
            
        }
    }    
    return 0;
}