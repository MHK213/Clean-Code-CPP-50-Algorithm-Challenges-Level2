#include <iostream>
#include <cstdlib>

using namespace  std;

// Function: ReadNumber
// Purpose: Prompts the user to enter a number and returns the entered number.
// Returns: The number entered by the user.
int ReadNumber(string Message) {
    int Number;
    cout << Message;
    cin >> Number;

    return Number;
}

// Function: AddArrayElement
// Purpose: Adds a new element to the array.
// Parameters:
//   - Number: The number to add to the array.
//   - arr: The array to which the number will be added.
//   - arrLength: A reference to the variable tracking the number of elements in the array.
// Behavior: Increments the array length and stores the new element at the new last position.
void AddArrayElement(int arr[], int& arrLenght, int Number) {
    arrLenght++;
    arr[arrLenght - 1] = Number;
}

// Function: InputUserNumbersInArray
// Purpose: Allows the user to input numbers into an array until they choose to stop.
// Parameters:
//   - arr: The array where user numbers will be stored.
//   - arrLength: A reference to the variable tracking the number of elements in the array.
void InputUserNumbersInArray(int arr[], int& arrLenght) {
    bool AddMore = 1;

    do {
        AddArrayElement(arr, arrLenght, ReadNumber("\nPlease Enter a Number? "));

        cout << "Do you want add more numbers? [0]:No,[1]:yes? ";
        cin >> AddMore;
    } while (AddMore);
}

// Function: PrintArrayElements
// Purpose: Prints all the elements of the array.
// Parameters:
//   - arr[]: The array to be printed.
//   - arrLength: Number of elements in the array.
void PrintArrayElements(int arr[], int arrLenght) {
    cout << "\nArray elements : ";
    for (int i = 0; i < arrLenght; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    InputUserNumbersInArray(arr, arrLength);

    PrintArrayElements(arr, arrLength);


    return 0;
}