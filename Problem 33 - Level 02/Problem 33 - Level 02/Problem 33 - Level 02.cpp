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

// Function: GetRandomCharacter
// Purpose: Returns a random uppercase letter (A-Z)
char GetRandomCharacter() {
    return char(RandomNumber(65, 90));
}

// Function: GenerateWord
// Purpose: Generates a random string of uppercase letters of given length
string GenerateWord(short lenght) {
    string Word = "";
    for (int j = 0; j < lenght; j++) {
        Word += GetRandomCharacter();
    }
    return Word;
}

// Function: GenerateKey
// Purpose: Constructs a key in the format XXXX-XXXX-XXXX-XXXX
string GenerateKey() {
    string Key = "";
    Key += GenerateWord(4) + "-";
    Key += GenerateWord(4) + "-";
    Key += GenerateWord(4) + "-";
    Key += GenerateWord(4);

    return Key;
}

// Function: FillArrayWithRandomKeys
// Fills a string array with randomly generated keys
void FillArrayWithRandomKeys(string arr[], int& arrLength) {

    for (int i = 0; i < arrLength; i++) {
        arr[i] = GenerateKey();
    }
}

// Function: PrintArrayElements
// Prints all keys in the array with their index
void PrintArrayElements(string arr[], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << "Array[" << i << "] : " << arr[i] << endl;
    }
    cout << endl;
}


int main() {
    srand((unsigned)time(NULL));

    string arr[100];
    int arrLength = ReadPositiveNumber("Enter number of elements? \n");

    FillArrayWithRandomKeys(arr, arrLength);

    cout << "Array elements : \n";
    PrintArrayElements(arr, arrLength);


    return 0;
}