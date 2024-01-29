// arg_no_return.cpp

#include <iostream>
#include <string>

using namespace std;

// Function declaration
void displayMessage(const string& message);

int main() {
    // Function call with argument
    displayMessage("This function takes an argument but has no return value.");

    return 0;
}

// Function definition
void displayMessage(const string& message) {
    cout << message << endl;
}
