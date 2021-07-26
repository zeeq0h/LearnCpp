#include <iostream>
#include <vector>


int main()
{
    std::vector <int> test_scores {100, 95, 99}; //this vector has 3 elements too it.
    std::cout << test_scores.at(0) << std::endl;

    test_scores.push_back(60); //this will now add the value 60 to the end of the vector, making it have 4 elements as vectors are not fixed in size
    std::cout << test_scores.at(3) << std::endl;


    //std::vector <char> vowels          //empty
    //std::vector <char> vowels          //5 initialized to zero
    std::vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    std::cout << vowels[0] << std::endl;
    std::cout << vowels[4] << std::endl;


    //std::vector <int> test_scores {100, 95, 99}; //as used already above

    std::cout << "\nTest scores using array syntax:" << std::endl;
    std::cout << test_scores[0] << std::endl;
    std::cout << test_scores[1] << std::endl;
    std::cout << test_scores[2] << std::endl;

    std::cout << "\nTest scores using vector syntax:" << std::endl; //these have bounds checking built in to them
    std::cout << test_scores.at(0) << std::endl;
    std::cout << test_scores.at(1) << std::endl;
    std::cout << test_scores.at(2) << std::endl;
    std::cout << "\nThere are " << test_scores.size() << " Scores in the vector" << std::endl;

    std::cout << "\nEnter 3 new test scores: " << std::endl;
    std::cin >> test_scores.at(0);
    std::cin >> test_scores.at(1);
    std::cin >> test_scores.at(2);

    std::cout << "\nUpdated test scores are:" << std::endl;
    std::cout << test_scores.at(0) << std::endl;
    std::cout << test_scores.at(1) << std::endl;
    std::cout << test_scores.at(2) << std::endl;

    //the dynamics of vectors
    std::cout << "\nEnter a test score to add to the vector: ";
    int score_to_add {0};
    std::cin >> score_to_add;

    test_scores.push_back(score_to_add);

    std::cout << "\nThe new test scores are:" << std::endl;

    std::cout << test_scores.at(0) << std::endl;
    std::cout << test_scores.at(1) << std::endl;
    std::cout << test_scores.at(2) << std::endl;
    std::cout << test_scores.at(3) << std::endl;
    std::cout << test_scores.at(4) << std::endl;

    std::cout << "\nThere are now " << test_scores.size() << " scores in the vector" << std::endl;

    //std::cout << "\nThis should cause an exception! " << test_scores.at(10); //this causes an exception as it is out of range











    return 0;
}
