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

// Function: PrintDigits
// Purpose: Prints the digits of a given number in reverse order, one digit per line.
//          It extracts each digit from the number using the modulo operator and then reduces the number.
// Parameter: Number - the positive integer whose digits are to be printed.
void PrintDigits(int Number) {
    int Remainder = 0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number /= 10;
        cout << Remainder << endl;
    }
}

int main()
{
    PrintDigits(ReadPositiveNumber("Enter a positive number? \n"));
    return 0;
}