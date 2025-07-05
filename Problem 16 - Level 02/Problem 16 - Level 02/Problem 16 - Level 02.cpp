#include <iostream>

using namespace std;

// Function: PrintAllLettersFromAAAtoZZZ
// Purpose: Prints all possible 3-letter uppercase combinations from 'AAA' to 'ZZZ'.
// Each letter ranges from ASCII code 65 ('A') to 90 ('Z').
// The total number of combinations is 26 × 26 × 26 = 17,576.
void PrintAllLettersFromAAAtoZZZ() {
    cout << endl;
    for (int i = 65; i < 91; i++) {
        for (int k = 65; k < 91; k++) {
            for (int j = 65; j < 91; j++) {
                cout << char(i) << char(k) << char(j);
                cout << endl;
            }
        }
    }
}

int main()
{

    PrintAllLettersFromAAAtoZZZ();

    return 0;
}