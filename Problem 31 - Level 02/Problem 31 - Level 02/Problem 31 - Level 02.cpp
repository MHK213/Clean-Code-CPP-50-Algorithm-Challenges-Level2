#include <iostream>
#include <cstdlib> 

using namespace std;

// Function: Swap
// Purpose: Swaps the values of two integers.
// Parameters:
//   - A: Reference to the first integer.
//   - B: Reference to the second integer.
void Swap(int& A, int& B)
{
    int Temp;    // Temporary variable to hold the value of A.
    Temp = A;    // Save the value of A in Temp.
    A = B;       // Copy the value of B into A.
    B = Temp;    // Copy the value of Temp (original A) into B.
}

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

// Function: FillArrayWith1toN
// Purpose: Fills an array with sequential numbers from 1 to N, where N is the array length.
// Parameters:
//   - arr: The integer array to fill (capacity 100).
//   - arrLength: The number of elements to fill in the array.
void FillArrayWith1ToN(int arr[], int arrLength) {

    for (int i = 0; i < arrLength; i++) {
        arr[i] = i + 1;
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

// Function: ShuffleArray
// Purpose: Randomly shuffles the elements in the array.
// Parameters:
//   - arr: The array to shuffle.
//   - arrLength: The number of elements in the array.
void ShuffleArray(int arr[], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        int index1 = RandomNumber(0, arrLength - 1);
        int index2 = RandomNumber(0, arrLength - 1);
        Swap(arr[index1], arr[index2]);
    }
}


int main() {
    srand((unsigned)time(NULL));

    int arr[100];

    int arrLength = ReadPositiveNumber("Enter number of elements? ");

    FillArrayWith1ToN(arr, arrLength);


    cout << "\nArray elements before shuffle: ";
    PrintArrayElements(arr, arrLength);

    ShuffleArray(arr, arrLength);

    cout << "\nArray elements after shuffle:  ";
    PrintArrayElements(arr, arrLength);

    return 0;
}