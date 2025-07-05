#include <iostream>
#include <cstdlib>

using namespace  std;

enum enNumberType { Odd = 1, Even = 2 };

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
void FillArrayWithRandomNumbers(int arr[], int& arrLength) {
    cout << "Enter number of elements ? \n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
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

// Function: CheckNumberType
// Purpose: Determines whether a given number is even or odd.
// Parameter: Num - the integer number to be checked.
// Returns: enNumberType::Even if the number is even, enNumberType::Odd if the number is odd.
enNumberType CheckNumberType(int Number) {
    if (Number % 2 == 0) {
        return Even;
    }
    else {
        return Odd;
    }
}

// Function: AddArrayElement
// Purpose: Adds a number to the end of the array and updates the length
void AddArrayElement(int Number, int arr[], int& arrLength) {
    arrLength++;
    arr[arrLength - 1] = Number;
}


// Function: CopyOddArrayElements
// Purpose: Copies only odd elements from source array to destination
void CopyOddArrayElements(int arrSource[], int sourceLength, int arrDestination[], int& destinationLength) {
    for (int i = 0; i < sourceLength; i++) {
        if (CheckNumberType(arrSource[i]) == enNumberType::Odd)
            AddArrayElement(arrSource[i], arrDestination, destinationLength);
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr1[100];
    int arrLength1 = 0;

    FillArrayWithRandomNumbers(arr1, arrLength1);

    cout << "\nArray 1 elements : \n";
    PrintArrayElements(arr1, arrLength1);

    int arr2[100];
    int arrLength2 = 0;

    CopyOddArrayElements(arr1, arrLength1, arr2, arrLength2);

    cout << "\nArray 2 elements : " << endl;
    PrintArrayElements(arr2, arrLength2);

    return 0;
}