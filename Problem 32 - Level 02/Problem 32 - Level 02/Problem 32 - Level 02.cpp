#include <iostream>
#include <cstdlib> 

using namespace std;

// Function: ReadPositiveNumber
// Purpose: Prompts the user to enter a positive number (greater than or equal to 0).
int ReadPositiveNumber(string Message) {
    int Number;
    do {
        cout << Message;
        cin >> Number;
    } while (Number < 0);

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
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function: CopyArrayInReverseOrder
// Copies elements from arrSource to arrDestination in reverse order
void CopyArrayInReverseOrder(int arrSource[], int arrDestination[], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arrDestination[i] = arrSource[arrLength - 1 - i];
    }
}

int main() {
    srand((unsigned)time(NULL));

    int arr1[100];
    int arr2[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr1, arrLength);
    CopyArrayInReverseOrder(arr1, arr2, arrLength);

    cout << "\nArray 1 Elements: ";
    PrintArrayElements(arr1, arrLength);

    cout << "\nArray 2 Elements: ";
    PrintArrayElements(arr2, arrLength);



    return 0;
}