// no_arg_with_return.cpp

#include <iostream>

using namespace std;

// Function declaration
int generateRandomNumber();

int main() {
    // Function call
    int randomNumber = generateRandomNumber();

    // Displaying the result
    cout << "Random Number: " << randomNumber << endl;

    return 0;
}

// Function definition
int generateRandomNumber() {
    return rand() % 100; // Generating a random number between 0 and 99
}
