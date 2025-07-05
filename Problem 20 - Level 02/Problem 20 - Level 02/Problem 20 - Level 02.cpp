#include <iostream>
#include <cstdlib>

using namespace std;

enum enCharType {SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4};

// Function: RandomNumber
// Purpose: Generates a random number between From and To (inclusive)
int RandomNumber(int From, int To) {
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}

// Function: GetRandomCharacter
// Purpose: Returns a random character based on the CharType enum
char GetRandomCharacter(enCharType CharType) {
    switch (CharType) {
    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));
        break;
    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));
        break;
    case enCharType::SpecialCharacter :
        return char(RandomNumber(33, 47));
        break;
    case enCharType::Digit :
        return char(RandomNumber(48, 57));
        break;
    }
    return '\0';
}

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomCharacter(enCharType::SmallLetter) << endl;      
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;     
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl; 
    cout << GetRandomCharacter(enCharType::Digit) << endl;
    return 0;
}