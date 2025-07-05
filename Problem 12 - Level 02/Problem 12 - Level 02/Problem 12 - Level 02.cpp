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
        cout << Message << endl; 
        cin >> Number;            
    } while (Number <= 0);       

    return Number; 
}

// Function: InvertedNumberPattern
// Purpose: Prints a descending pattern where each line displays the same digit
//          repeated, starting from Number down to 1.
// Example for Number = 5:
// 55555
// 4444
// 333
// 22
// 1
void IvertedNumberPattern(int Number) {
    while (Number > 0) {
        for (int i = 1; i <= Number; i++) {
            cout << Number;
        }
        cout << endl;
        Number--;
    }
}

int main()
{
    IvertedNumberPattern(ReadPositiveNumber("Enter a positive number? "));

    return 0;
}