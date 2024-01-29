// arg_with_return.cpp

#include <iostream>

using namespace std;

// Function declaration
int addNumbers(int a, int b);

int main() {
    // Function call with arguments
    int result = addNumbers(10, 5);

    // Displaying the result
    cout << "Sum: " << result << endl;

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}
