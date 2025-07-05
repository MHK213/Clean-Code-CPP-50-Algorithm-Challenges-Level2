#include <iostream>

using namespace std;

// Function: ReadPositiveNumber
// Purpose: Prompts the user to enter a positive number.
// Keeps asking until the user enters a number greater than 0.
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;  // Display the message to the user
        cin >> Number;            // Read user input
    } while (Number <= 0);        // Repeat if the number is not positive

    return Number;  // Return the valid positive number
}

// Function: PrintInvertedLetterPattern
// Purpose: Prints an inverted letter pattern using uppercase letters.
//          The pattern starts with the letter corresponding to ASCII code (65 + Number - 1)
//          and decrements down to 'A' (ASCII 65). In each row, the letter is printed
//          a decreasing number of times, starting from 'Number' times on the first row,
//          down to 1 time on the last row.
// Parameter: Number - the positive integer that determines the height of the pattern
//                     and the number of times the first (highest) letter is printed.
void PrintInvertedLetterPattern(int Number) {
    cout << endl;
    for (int i = (64 + Number); i >= 65; i--) {
        for (int j = 1; j <= Number - (65 + Number -1 - i); j++) {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{

    PrintInvertedLetterPattern(ReadPositiveNumber("Enter a positive number? "));

    return 0;
}