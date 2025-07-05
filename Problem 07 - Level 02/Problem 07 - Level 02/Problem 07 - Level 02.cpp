#include <iostream>
#include <string>

using namespace std;

// Function: ReadPositiveNumber
// Purpose: Prompts the user to enter a positive number and ensures the input is non-negative.
// Parameter:
//   - Message: A string containing the prompt message to be displayed.
// Returns: A positive integer entered by the user.
int ReadPositiveNumber(string Message) {
    int Number;

    do {
        cout << Message;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

// Function: ReverseNumber
// Purpose: Reverses the digits of a given number.
// Parameter:
//   - Number: The integer to be reversed.
// Returns: The reversed number (e.g., 123 -> 321).
int ReverseNumber(int Number) {
    int Remainder = 0;
    int ReverseNum = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number /= 10;
        ReverseNum = (ReverseNum * 10) + Remainder;
    }
    return ReverseNum;
}

int main()
{
    cout << "\nReverse is : " << ReverseNumber(ReadPositiveNumber("Enter a positive number? \n")) << endl;
    return 0;
}