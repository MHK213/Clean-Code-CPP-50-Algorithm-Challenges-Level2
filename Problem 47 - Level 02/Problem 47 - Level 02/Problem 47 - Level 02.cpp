#include <iostream>
#include <cmath>

using namespace std;

// Function: ReadNumber
// Purpose: Prompts user with a custom message and reads a number
// Returns: float number input from the user
float ReadNumber(string Message) {
    float Number;
    cout << Message;
    cin >> Number;

    return Number;
}

float GetFractionPart(float Number) {
    return Number - int(Number);
}

// Function: MyRound
// Purpose: Rounds a floating-point number to the nearest integer.
float MyRound(float Number) {
    int IntPart = int(Number);

    if (abs(GetFractionPart(Number)) >= 0.5)
    {
        if (Number > 0)
            return IntPart + 1;
        else
            return IntPart - 1;
    }
    else
    {
        return IntPart;
    }
}

int main()
{
    float Number = ReadNumber("Enter a number? \n");

    cout << "\nMy Round Result : " << MyRound(Number) << endl;

    cout << "\nC++ Round Result : " << round(Number) << endl;

    return 0;
}