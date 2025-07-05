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

// Function: PrintNumberPattern
// Purpose: Prints a number pattern where each line contains the same digit repeated i times.
// Example for Number = 5:
// 1
// 22
// 333
// 4444
// 55555
void PrintNumberPattern(int Number) {
    cout << endl;
    for (int i = 1; i <= Number; i++){
        for (int j = 1; j <= i; j++) {
            cout << i; 
        }
    cout << endl;
    }
}

int main()
{

    PrintNumberPattern(ReadPositiveNumber("Enter a positive number? "));

    return 0;  
}