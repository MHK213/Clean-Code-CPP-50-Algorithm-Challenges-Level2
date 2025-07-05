#include <iostream>
#include <cstdlib>

using namespace  std;

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

// Function: RandomNumber
// Purpose: Generates a random number between From and To (inclusive)
int RandomNumber(int From, int To) {
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}

// Function: FillArrayWithRandomNumbers
// Purpose: Fills an array with a specified number of random numbers between 1 and 100.
// Parameters:
//   arr      - an integer array with a capacity of 100 elements.
//   arrLength - a reference variable that will hold the number of elements to fill.
//             The user specifies this number.
void FillArrayWithRandomNumbers(int arr[], int& arrLenght) {
    cout << "Enter number of elements ? \n";
    cin >> arrLenght;

    for (int i = 0; i < arrLenght; i++) {
        arr[i] = RandomNumber(1, 100);
    }
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

// Function: FindNumberPositionInArray
// Searches for a number in the array and returns its index.
// Returns -1 if the number is not found.
int FindNumberPositionInArray(int arr[], int arrLength, int NumberToCheck) {
    for (int i = 0; i < arrLength; i++) {
        if (NumberToCheck == arr[i])
            return i;
    }

    return -1;
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    PrintArrayElements(arr, arrLength);

    int NumberToCheck = ReadPositiveNumber("\nEnter a positive number? \n");

    cout << "\nNumber you are looking for is : " << NumberToCheck << endl;

    short NumberPosition = FindNumberPositionInArray(arr, arrLength, NumberToCheck);

    // Find and display position of the number (if found)
    if (NumberPosition == -1)
        cout << "The number is not found -( \n";
    else {
        cout << "The number found at position : " << NumberPosition << endl;
        cout << "The Number found its order : " << NumberPosition + 1 << endl;
    }
    return 0;
}