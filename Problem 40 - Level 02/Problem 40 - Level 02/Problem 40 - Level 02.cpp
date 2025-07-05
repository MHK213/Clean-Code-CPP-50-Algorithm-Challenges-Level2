#include <iostream>
#include <cstdlib>

using namespace  std;

// Function: FillArray
// Purpose: Hardcodes 10 predefined values into the array, including duplicates.
// Parameters:
//   - arr: The array to be filled.
//   - arrLength: The expected number of elements (not used here for looping).
void FillArray(int arr[]) {
        arr[0] = 10;
        arr[1] = 10;
        arr[2] = 10;
        arr[3] = 50;
        arr[4] = 50;
        arr[5] = 70;
        arr[6] = 70;
        arr[7] = 70;
        arr[8] = 70;
        arr[9] = 90;
}

// Function: PrintArrayElements
// Purpose: Prints the contents of the array
void PrintArrayElements(int arr[], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function: AddArrayElement
// Purpose: Adds a number to the end of the array and updates the length
void AddArrayElement(int Number, int arr[], int& arrLength) {
    arrLength++;
    arr[arrLength - 1] = Number;
}

// Function: FindNumberInArray
// Purpose: Checks if a number already exists in the array up to a certain index.
// Parameters:
//   - arr: The array to search.
//   - Counter: Number of elements to search through (not the full array).
//   - NumberToCheck: The number to find.
// Returns:
//   - true if number exists in arr[0 to Counter-1], false otherwise.
bool FindNumberInArray(int arr[], int Counter, int NumberToCheck) {
    for (int i = 0; i < Counter; i++) {
        if (arr[i] == NumberToCheck)
            return true;
    }
    return false;
}

// Function: CopyDistinctArrayElements
// Purpose: Copies only distinct values from arrSource[] into arrDestination[].
// Parameters:
//   - arrSource: The input array with potential duplicates.
//   - sourceLength: Length of the input array.
//   - arrDestination: Output array for unique values.
//   - destinationLength: Reference to track the count of added elements.
void CopyDistinctArrayElements(int arrSource[], int sourceLength, int arrDestination[], int& destinationLength) {
    for (int i = 0; i < sourceLength; i++) {
        if (FindNumberInArray(arrSource, i, arrSource[i]) == false)
            AddArrayElement(arrSource[i], arrDestination, destinationLength);
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr1[100];
    int arrLength1 = 10;

    FillArray(arr1);

    cout << "Array 1 elements : \n";
    PrintArrayElements(arr1, arrLength1);

    int arr2[100];
    int arrLength2 = 0;

    CopyDistinctArrayElements(arr1, arrLength1, arr2, arrLength2);

    cout << "Array 2 Distinct elements: " << endl;
    PrintArrayElements(arr2, arrLength2);


    return 0;
}