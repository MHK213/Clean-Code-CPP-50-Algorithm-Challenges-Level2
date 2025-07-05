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

// Function: AverageOfArray
// Purpose: Returns the average of the array elements as a float.
float AverageOfArray(int arr[], int arrLength) {
    return (float)SumOfArray(arr, arrLength) / arrLength;
}

int main() {
    srand((unsigned)time(NULL));  

    int arr[100];     
    int arrLength;   

    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArrayElements(arr, arrLength);

    cout << "Average = " << AverageOfArray(arr, arrLength) << endl;

    return 0;
}