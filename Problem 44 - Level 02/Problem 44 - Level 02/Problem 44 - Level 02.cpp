#include <iostream>
#include <cstdlib>

using namespace  std;

// Function: RandomNumber
// Purpose: Generates a random number between From and To (inclusive)
int RandomNumber(int From, int To) {
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}

// Function: FillArrayWithRandomNumbers
// Purpose: Fills an array with a specified number of random numbers between -100 and 100.
// Parameters:
//   arr      - an integer array with a capacity of 100 elements.
//   arrLength - a reference variable that will hold the number of elements to fill.
//             The user specifies this number.
void FillArrayWithRandomNumbers(int arr[], int& arrLength) {
    cout << "Enter number of elements ? \n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(-100, 100);
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

// Counts how many numbers are positive or zero
int CountPositiveNumbers(int arrSource[], int sourceLength) {
    int Count = 0;
    for (int i = 0; i < sourceLength; i++) {
        if (arrSource[i] >= 0)
            Count++;
    }

    return Count;
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength1 = 0;

    FillArrayWithRandomNumbers(arr, arrLength1);

    cout << "\nArray Elements : \n";
    PrintArrayElements(arr, arrLength1);

    cout << "\nPositive Numbers Count is : " << CountPositiveNumbers(arr, arrLength1) << endl;

    return 0;
}