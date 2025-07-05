#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

// Function: ReadPositiveNumber
// Purpose: Prompts the user to enter a positive number (greater than or equal to 0).
int ReadPositiveNumber(string Message) {
    int Number;
    do {
        cout << Message;
        cin >> Number;
    } while (Number < 0);  // Repeat until a non-negative number is entered

    return Number;
}

// Function: RandomNumber
// Purpose: Generates a random number in the range [From, To]
int RandomNumber(int From, int To) {
    return rand() % (To - From + 1) + From;
}

// Function: FillArrayWithRandomNumbers
// Purpose: Fills an array with random numbers between 1 and 100
void FillArrayWithRandomNumbers(int arr[], int& arrLength) {
    cout << "Enter number of elements?\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

// Function: PrintArrayElements
// Purpose: Prints each element in the array
void PrintArrayElements(int arr[], int arrLength) {
    cout << "Original Array: ";
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function: SumOfArray
// Purpose: Calculates and returns the sum of all elements in the array
int SumOfArray(int arr[], int arrLength) {
    int Sum = 0;
    for (int i = 0; i < arrLength; i++) {
        Sum += arr[i];
    }
    return Sum;
}

// Main Function
int main() {
    srand((unsigned)time(NULL));  // Seed the random number generator

    int arr[100];     // Declare an array of size 100
    int arrLength;    // Will hold the actual number of elements

    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArrayElements(arr, arrLength);

    cout << "Sum = " << SumOfArray(arr, arrLength) << endl;

    return 0;
}
