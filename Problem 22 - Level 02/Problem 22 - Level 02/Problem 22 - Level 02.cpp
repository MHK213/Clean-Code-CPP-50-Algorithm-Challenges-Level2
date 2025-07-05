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

// Function: ReadArrayElements
// Purpose: Asks user for the array length and fills the array with values entered by the user.
// Parameters:
//   - arr[]: Array to store the elements.
//   - arrLength: Reference variable to store the number of elements input by user.
void ReadArrayElements(int arr[], int& arrLenght) {
    cout << "Enter number of elements ? \n";
    cin >> arrLenght;

    cout << "Enter Array Elements: \n";
    for (int i = 0; i < arrLenght; i++) {
        cout << "Element[" << i + 1 << "] : ";
        cin >> arr[i];
    }
}

// Function: PrintArrayElements
// Purpose: Prints all the elements of the array.
// Parameters:
//   - arr[]: The array to be printed.
//   - arrLength: Number of elements in the array.
void PrintArrayElements(int arr[], int arrLenght) {
    cout << "Original Array : ";
    for (int i = 0; i < arrLenght; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function: TimesRepeated
// Purpose: Counts how many times a specific number appears in the array.
// Parameters:
//   - arr[]: The array to search.
//   - arrLength: Number of elements in the array.
//   - NumberToCheck: The number to count in the array.
// Returns: Number of occurrences of NumberToCheck in the array.
int TimesRepeated(int arr[], int arrLenght, short NumberToCheck) {
    int Count = 0;
        for (int j = 0; j < arrLenght; j++) {
            if (NumberToCheck == arr[j])
                Count++;
        }
    return Count;
}

int main()
{
    int Length = 0;
    int Array[100];
    ReadArrayElements(Array, Length);
    int NumberToCheck = ReadPositiveNumber("Enter number you want check it? \n");
    PrintArrayElements(Array, Length);
    cout << NumberToCheck << " is repeated " << TimesRepeated(Array, Length, NumberToCheck);

    return 0;
}