#include <iostream>
#include <cstdlib>  // For rand(), srand()
#include <ctime>    // For time()

using namespace std;

// Function: ReadPositiveNumber
// Purpose: Prompts the user to enter a positive number and ensures the input is non-negative.
int ReadPositiveNumber(string Message) {
    int Number;

    do {
        cout << Message;
        cin >> Number;
    } while (Number < 0); // Repeat if user enters a negative number

    return Number;
}

// Function: RandomNumber
// Purpose: Generates a random number between From and To (inclusive)
int RandomNumber(int From, int To) {
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

// Function: FillArrayWithRandomNumbers
// Purpose: Fills an array with random numbers between 1 and 100
// Parameters:
//   - arr: the array to fill
//   - arrLength: number of elements to fill (input by user)
void FillArrayWithRandomNumbers(int arr[], int& arrLength) {
    cout << "\nEnter number of elements: ";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

// Function: PrintArrayElements
// Purpose: Prints all array elements with spaces in between
void PrintArrayElements(int arr[], int arrLength) {
    cout << "Original Array: ";
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function: MinNumberInArray
// Purpose: Returns the smallest value in the array
int MinNumberInArray(int arr[], int arrLength) {
    int Min = arr[0];
    for (int i = 1; i < arrLength; i++) {
        if (arr[i] < Min)
            Min = arr[i];
    }
    return Min;
}

int main() {
    srand((unsigned)time(NULL)); // Seed the random generator

    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArrayElements(arr, arrLength);

    cout << "Min Number is: " << MinNumberInArray(arr, arrLength) << endl;

    return 0;
}