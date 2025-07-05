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

// Function: MyCeil
// Purpose: Computes the ceiling value of a floating-point number.
// Parameters:
//   - Number: A floating-point number whose ceiling value is to be determined.
// Returns: The smallest integer greater than or equal to the input number.
float MyCeil(float Number) {
    int IntPart = int(Number);

    if (Number < 0 || Number == IntPart)
        return IntPart;
    else
        return IntPart + 1;
}


int main()
{
    float Number = ReadNumber("Enter a number? \n");

    cout << "\nMy Ceil Result : " << MyCeil(Number) << endl;

    cout << "\nC++ Ceil Result : " << ceil(Number) << endl;

    return 0;
}