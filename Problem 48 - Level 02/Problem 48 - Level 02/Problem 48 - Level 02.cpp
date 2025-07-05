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

// Function: MyFloor
// Purpose: Computes the floor value of a floating-point number.
// Parameters:
//   - Number: A floating-point number whose floor value is to be determined.
// Returns: The greatest integer less than or equal to the input number.
float MyFloor(float Number) {
    int IntPart = int(Number);

    if (Number == IntPart || Number >= 0)
        return IntPart;
    else
        return IntPart - 1;
}


int main()
{
    float Number = ReadNumber("Enter a number? \n");

    cout << "\nMy Floor Result : " << MyFloor(Number) << endl;

    cout << "\nC++ floor Result : " << floor(Number) << endl;

    return 0;
}