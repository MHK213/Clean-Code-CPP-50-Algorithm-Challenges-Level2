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
// Purpose: Counts how many times a specific digit appears in a number.
// Parameters:
//   - Number: The number in which to count the digit
//   - DigitToCheck: The digit to count (0 to 9)
// Returns: Number of times DigitToCheck appears in Number
int CountDigitFrequency(int Number, short DigitToCheck) {
    int Frequency = 0;
    int Remainder = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number /= 10;
        if (Remainder == DigitToCheck)
                Frequency++;
    }
    return Frequency;
}

// Function: PrintAllDigitsFrequencey
// Purpose: Prints the frequency of each digit (0-9) present in the given number.
// Parameter: Number - the number for which digit frequencies are to be printed.
void PrintAllDigitsFrequency(int Number) {
    cout << endl;

    for (int i = 0; i < 10; i++) {
        short DigitFrequency = 0;
        DigitFrequency = CountDigitFrequency(Number, i);

        if(DigitFrequency >0 )
            cout << "\nDigit " << i << " Frequency is " << DigitFrequency << " Time(s)" << endl;
    }
}

int main()
{
    PrintAllDigitsFrequency(ReadPositiveNumber("Enter a positive Number? \n"));
    return 0;
}