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

// Function: SumOfDigits
// Purpose: Calculates the sum of the digits of a given number.
// Parameters:
//   - Number: The integer whose digits will be summed.
// Returns: The sum of the digits.
int SumOfDigits(int Number) {
    int Remainder = 0, Sum = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number /= 10;
        Sum += Remainder;
    }
    return Sum;
}

// Function: PrintResult
// Purpose: Calls SumOfDigits and prints the result to the user.
// Parameters:
//   - Number: The integer to be processed.
void PrintResult(int Number) {
    cout << "Sum of Digits = " << SumOfDigits(Number) << endl;
}

int main()
{
    PrintResult(ReadPositiveNumber("Enter a positive number? \n"));
    return 0;
}