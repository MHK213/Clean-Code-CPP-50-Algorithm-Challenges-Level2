#include <iostream>
#include <cstdlib>

using namespace std;

// Function: ReadPositiveNumber
// Purpose: Prompts the user to enter a positive number and ensures the input is non-negative.
// Parameter:
//   - Message: A string containing the prompt message to be displayed.
// Returns: A positive integer entered by the user.
int ReadPositiveNumber(string Message) {
    int Number;

    do {
        cout << Message;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

// Function: RandomNumber
// Purpose: Generates a random number between From and To (inclusive)
int RandomNumber(int From, int To) {
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
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

// Function: GenerateKeys
// Purpose: Displays the requested number of random keys
void GenerateKeys(short NumberOfKeys) {
    cout << endl;
    for (int i = 0; i < NumberOfKeys; i++) {
        cout << "Key [" << i + 1 << "] : " << GenerateKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(0));
    GenerateKeys(ReadPositiveNumber("Enter how many keys you want to generate? \n"));

    return 0;
}