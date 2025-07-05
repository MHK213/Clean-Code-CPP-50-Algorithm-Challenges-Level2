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

// Function: PrintResult
// Purpose: Prints whether the provided number is a perfect number.
// Parameters: Number - the integer to check and display the result for.
void PrintResult(int Number) {
    
    if (IsPerfectNumber(Number))
        cout << Number << " is a Perfect Number\n";
    else 
        cout << Number << " is Not Perfect Number\n";
}

int main()
{
    PrintResult(ReadPositiveNumber("Enter a Positive Number? \n"));

    return 0;
}