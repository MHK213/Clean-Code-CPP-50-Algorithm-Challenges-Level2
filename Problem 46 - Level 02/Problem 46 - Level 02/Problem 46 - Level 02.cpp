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

// Function: MyABS
// Purpose: Returns the absolute value of a float
float MyABS(float Number) {
    if (Number > 0)
        return Number;
    else
        return Number * -1;
}

int main()
{
    float Number = ReadNumber("Enter a number? \n");
    cout << "\nMy abs Result : " << MyABS(Number) << endl;

    cout << "\nC++ abs Result : " << abs(Number) << endl;

    return 0;
}