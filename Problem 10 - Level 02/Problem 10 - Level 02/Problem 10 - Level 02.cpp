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

int main() {
    PrintDigits(ReverseNumber(ReadPositiveNumber("Enter a positive number? ")));
    return 0;
}