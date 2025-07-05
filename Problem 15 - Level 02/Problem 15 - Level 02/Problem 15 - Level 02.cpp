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

// Function: PrintLetterPattern
// Purpose: Prints a letter pattern using uppercase letters.
//          It starts from 'A' and prints as many letters as specified by the input Number.
//          Each row prints a letter repeated a number of times equal to its position in the alphabet.
//          For example, if Number is 3, the pattern will be:
//              A
//              BB
//              CCC
// Parameter: Number - a positive integer determining the number of rows in the pattern.
void PrintLetterPattern(int Number) {
    cout << endl;
    for (int i = 65; i <= (64 + Number); i++) {
        for (int j = 1; j <= i - 64; j++) {
            cout << char(i);
        }
        cout << endl;
    }
}

int main()
{

    PrintLetterPattern(ReadPositiveNumber("Enter a positive number? "));

    return 0;
}