#include <iostream>
#include <cstdlib>

using namespace  std;

// Function: ReadArrayElements
// Purpose: Asks user for the array length and fills the array with values entered by the user.
// Parameters:
//   - arr[]: Array to store the elements.
//   - arrLength: Reference variable to store the number of elements input by user.
void ReadArrayElements(int arr[], int& arrLenght) {
    cout << "\nEnter number of elements ? \n";
    cin >> arrLenght;

    cout << "Enter Array Elements: \n";
    for (int i = 0; i < arrLenght; i++) {
        cout << "Element[" << i + 1 << "] : ";
        cin >> arr[i];
    }
}

// Function: PrintArrayElements
// Purpose: Prints the contents of the array
void PrintArrayElements(int arr[], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function: PrintArrayElements
// Purpose: Prints all elements in the array separated by spaces.
// Parameters:
//   - arr[]: The array to print.
//   - arrLength: Number of elements in the array.
bool IsPalindromeArray(int arr[], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] != arr[arrLength - 1 - i])
            return false;
    }

    return true;
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    ReadArrayElements(arr, arrLength);

    cout << "\nArray Elements : \n";
    PrintArrayElements(arr, arrLength);

    if (IsPalindromeArray(arr, arrLength))
        cout << "\nYes Array is Palindrome" << endl;
    else 
        cout << "\nNo Array is Not Palindrome" << endl;

    return 0;
}