#include <iostream>
#include <cstdlib> 

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

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
void FillArrayWithRandomNumbers(int arr[], int arrLength) {

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

// Function: SumOf2Arrays
// Purpose: Computes the element-wise sum of two arrays and stores the result in a third array.
// Parameters:
//   - arr1: The first source array.
//   - arr2: The second source array.
//   - arrSum: The destination array that will store the sum of corresponding elements.
//   - arrLength: The number of elements in each array.
void SumOf2Arrays(int arr1[], int arr2[], int arrSum[], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arrSum[i] = arr1[i] + arr2[i];
    }
}


int main() {
    srand((unsigned)time(NULL));

    int arr1[100];
    int arr2[100];
    int arrSum[100];
    
    int arrLength = ReadPositiveNumber("Enter number of elements?\n");

    FillArrayWithRandomNumbers(arr1, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);


    cout << "\nArray 1 Elements: ";
    PrintArrayElements(arr1, arrLength);

    cout << "\nArray 2 Elements: ";
    PrintArrayElements(arr2, arrLength);

    SumOf2Arrays(arr1, arr2, arrSum, arrLength);

    cout << "\nSum of array1 and array2 elements:  ";
    PrintArrayElements(arrSum, arrLength);

    return 0;
}