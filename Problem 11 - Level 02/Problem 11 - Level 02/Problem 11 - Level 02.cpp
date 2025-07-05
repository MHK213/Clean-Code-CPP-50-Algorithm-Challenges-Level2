#include <iostream>

using namespace std;

// Function: ReadPositiveNumber
// Purpose: Prompts the user with a custom message to enter a positive number.
//          Continues to prompt until the user inputs a number greater than zero.
// Parameter: Message - a string containing the prompt to display.
// Returns: A positive integer provided by the user.
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

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

// Function: IsPalindromeNumber
// Purpose: Checks if the given number is a palindrome.
// A palindrome number reads the same forward and backward.
bool IsPalindromeNumber(int Number) {
    return Number == ReverseNumber(Number);
}

// Function: PrintResult
// Purpose: Prints whether the given number is a palindrome or not.
void PrintResult(int Number) {
    if (IsPalindromeNumber(Number))
        cout << "Yes, it is a palindrome number\n";
    else
        cout << "No, it is NOT a palindrome number\n";
}

int main() {
    int Number = ReadPositiveNumber("Enter a positive number? ");
    PrintResult(Number);
    return 0;
}