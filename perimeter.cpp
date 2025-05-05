#include <iostream>  // This allows us to use input and output (cin, cout)

using namespace std;

int main() {
    // Declare variables to hold the length and width
    float length, width;

    // Ask the user to enter the length
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    // Ask the user to enter the width
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate the perimeter using the formula: P = 2 * (length + width)
    float perimeter = 2 * (length + width);

    // Display the result
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;  // End of the program
}

// i have added a comment to the code for better understanding 
// copy the code and run it in your local environment

