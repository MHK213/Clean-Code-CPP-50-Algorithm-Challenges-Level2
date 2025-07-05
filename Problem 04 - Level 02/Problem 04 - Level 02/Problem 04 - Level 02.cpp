#include <iostream>

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

// Function: IsPerfectNumber
// Purpose: Determines if a given number is a perfect number.
// A perfect number is defined as a number that is equal to the sum of its proper divisors (excluding itself).
// Parameters: Number - the integer to check for perfection.
// Returns: true if the number is perfect; false otherwise.
bool IsPerfectNumber(int Number) {
    int Sum = 0;
    for (int i = 1; i < Number; i++) {
        if (Number % i == 0)
            Sum += i;
    }

    return (Sum == Number);
}

// Function: PrintPerfectNumbersFrom1ToN
// Purpose: Prints all perfect numbers between 1 and a given upper limit (inclusive).
// Parameter: Number - the upper limit for checking perfect numbers.
void PrintPerfectNumbersFrom1ToN(int Number) {
    cout << "\nPerfect Numebrs From 1 To " << Number << endl;
    for (int i = 1; i <= Number; i++) {
        if (IsPerfectNumber(i))
            cout << i << " is a Perfect Number\n";
    }
}

int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Enter a Positive Number? \n"));

    return 0;
}