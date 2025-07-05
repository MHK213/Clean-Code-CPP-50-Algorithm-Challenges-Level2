#include <iostream>
#include <cstdlib> 

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2};

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

// Function: CheckPrime
// Purpose: Determines if a given number is prime or not.
// Parameter:
//   - Number: The integer to check for primality.
// Returns: enPrimNotPrime::Prime if the number is prime, otherwise enPrimNotPrime::NotPrime.
enPrimeNotPrime CheckPrime(int Number) {
    if (Number < 2)
        return enPrimeNotPrime::NotPrime;

    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++) {
        if (Number % Counter == 0)
            return NotPrime;
    }

    return Prime;
}

// Function: CopyOnlyPrimaryNumbers
// Copies only prime numbers from arrSource to arrDestination
void CopyOnlyPrimaryNumbers(int arrSource[], int arrDestination[], int arrLength, int& arrLength2) {
    arrLength2 = 0;
    for (int i = 0; i < arrLength; i++) {
        if (CheckPrime(arrSource[i]) == enPrimeNotPrime::Prime) {
            arrDestination[arrLength2] = arrSource[i];
            arrLength2++;
        }
    }
}


int main() {
    srand((unsigned)time(NULL));

    int arr1[100];
    int arr2[100];
    int arrLength;
    int arrLength2 = 0;

    FillArrayWithRandomNumbers(arr1, arrLength);

    CopyOnlyPrimaryNumbers(arr1, arr2, arrLength, arrLength2);

    cout << "\nArray 1 Elements: ";
    PrintArrayElements(arr1, arrLength);

    cout << "\nArray 2 Prime Elements: ";
    PrintArrayElements(arr2, arrLength2);

    return 0;
}