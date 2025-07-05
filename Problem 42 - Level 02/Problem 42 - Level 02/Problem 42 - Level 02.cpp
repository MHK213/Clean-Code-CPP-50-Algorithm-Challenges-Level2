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

// Function: CountOddNumbers
// Purpose: Counts how many odd numbers exist in the array.
// Parameters:
//   - arrSource[]: Array to inspect.
//   - sourceLength: Number of elements in the array.
// Returns: Total count of odd numbers.
int CountOddNumbers(int arrSource[], int sourceLength) {
    int Count = 0;
    for (int i = 0; i < sourceLength; i++) {
        if (CheckNumberType(arrSource[i]) == enNumberType::Odd)
            Count++;
    }

    return Count;
}


int main()
{
    srand((unsigned)time(NULL));

    int arr1[100];
    int arrLength1 = 0;

    FillArrayWithRandomNumbers(arr1, arrLength1);

    cout << "\nArray 1 elements : \n";
    PrintArrayElements(arr1, arrLength1);

    cout << "\nOdd Numbers Count : " << CountOddNumbers(arr1, arrLength1) << endl;

    return 0;
}