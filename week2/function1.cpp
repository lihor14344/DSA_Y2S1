// no_arg_no_return.cpp

#include <iostream>

using namespace std;

// Function declaration
void greet();

int main() {
    // Function call
    greet();
    return 0;
}

// Function definition
void greet() {
    cout << "Hello! This function has no arguments and no return value." << endl;
}

