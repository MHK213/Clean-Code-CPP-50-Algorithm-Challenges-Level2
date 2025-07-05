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
    cout << "\nEnter number of elements ? \n";
    cin >> arrLenght;

    cout << "Enter Array Elements: \n";
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
    cout << "Original Array : ";
    for (int i = 0; i < arrLenght; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function: MaxNumberInArray
// Purpose: Returns the maximum value found in the array
int MaxNumberInArray(int arr[], int arrLenght) {
    int Max = arr[0];
    for (int i = 1; i < arrLenght; i++) {
        if (arr[i] > Max)
            Max = arr[i];
    }

    return Max;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArrayElements(arr, arrLength);

    cout << "Max Number is : " << MaxNumberInArray(arr, arrLength);

    return 0;
}