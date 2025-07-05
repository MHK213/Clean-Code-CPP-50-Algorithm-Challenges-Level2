#include <iostream>
#include <cmath>

using namespace std;

// Function: ReadPositiveNumber
// Purpose: Prompts the user to enter a positive number and ensures the input is non-negative.
// Parameter:
//   - Message: A string containing the prompt message to be displayed.
// Returns: A positive integer entered by the user.
float ReadPositiveNumber(string Message) {
    float Number;

    do {
        cout << Message;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

// Function: MySqrt
// Purpose: Computes the square root of a given number using the pow function.
// Parameters:
//   - Number: A floating-point number whose square root is to be determined.
// Returns: The square root of the input number.
float MySqrt(float Number) {
    return pow(Number, 0.5);
}


int main()
{
    float Number = ReadPositiveNumber("Enter a positive number? \n");

    cout << "\nMy Sqrt Result : " << MySqrt(Number) << endl;

    cout << "\nC++ Sqrt Result : " << sqrt(Number) << endl;

    return 0;
}