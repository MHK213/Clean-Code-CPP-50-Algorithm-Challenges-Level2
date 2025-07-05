#include <iostream>

using namespace std;

// Enum: enPrimNotPrime
// Purpose: Represents whether a number is Prime (1) or Not Prime (2).
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

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

// Function: CheckPrime
// Purpose: Determines if a given number is prime or not.
// Parameter:
//   - Number: The integer to check for primality.
// Returns: enPrimNotPrime::Prime if the number is prime, otherwise enPrimNotPrime::NotPrime.
enPrimeNotPrime CheckPrime(int Number) {
    if (Number < 2)
        return enPrimeNotPrime::NotPrime;

    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++) {
        if (Number % Counter == 0)
            return NotPrime;
    }

    return Prime;
}

// Function: PrintPrimeNumbersFrom1ToN
// Purpose: Prints all the prime numbers from 1 up to a given number.
// It first displays a header message and then checks each number in the range.
void PrintPrimeNumbersFrom1ToN(int Number) {
    cout << "All Prime Number From 1 to : " << Number << endl;
    for (int Counter = 2; Counter <= Number; Counter++) {
        if (CheckPrime(Counter) == enPrimeNotPrime::Prime)
            cout << Counter << " is Prime" << endl;
    }
}

int main()
{
    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Enter a Positive Number? "));
    return 0;
}