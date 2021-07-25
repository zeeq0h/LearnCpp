#include <iostream>

using namespace std;

int main()
{
char vowels[] {'a', 'e', 'i', 'o', 'u'};
cout << "\nThe first vowel is: " << vowels[0] << endl;
cout << "The last vowel is: " << vowels[4] << endl;
//if we try and call a fifth non existant variable in the array the program will / should crash
//cin >> vowels[5];

double high_temps[] {90.1, 89.8, 77.5, 81.6}; //american temps cause they are weird
cout << "\nThe first high temperature is: " << high_temps[0] << endl;

high_temps[0] = 100.7; //replace element 1 with this new reading
cout << "The first high temperature is now: " << high_temps[0] << endl; 

//test scores but will use for statement bit early on kekw
cout << endl;
int test_scores[5] {}; //always initialise an array otherwise it will spit out garbage

for(int i = 0; i <= 4; i++) {
  cout << test_scores[i] << endl;
}

cout << "\nEnter 5 new test scores: ";
for(int i = 0; i <= 4; i++) {
  cin >> test_scores[i];
}

//print out this new updated array
cout << "\nThe new test scores are: ";
for(int i = 0; i <= 4; i++) {
  cout << test_scores[i] << endl;
}

cout << "Notice the name of the array is: " << test_scores; //this is the memory address for the array

cout << endl;
return 0;
}
