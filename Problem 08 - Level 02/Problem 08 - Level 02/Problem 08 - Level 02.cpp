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

// Function: CountDigitFrequency
// Purpose: Counts how many times a specific digit appears in the given number.
// Parameters:
//   - Number: The number to analyze
//   - DigitToCheck: The digit whose frequency is being counted
// Returns: Number of times the digit appears in the number
int CountDigitFrequency(int Number, short DigitToCheck) {
    int Remainder = 0;
    int Frequency = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number /= 10;
        if (Remainder == DigitToCheck)
            Frequency++;
    }
    return Frequency;
}

// Function: PrintResult
// Purpose: Outputs the result of digit frequency in the number.
void PrintResult(int Number, short DigitToCheck) {
    cout << "\nDigit " << DigitToCheck << " Frequency is " << CountDigitFrequency(Number, DigitToCheck) << " Time(s)" << endl;
}

int main()
{
    int Number = ReadPositiveNumber("Enter a positive number? \n");
    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check? \n");
    PrintResult(Number, DigitToCheck);
    return 0;
}