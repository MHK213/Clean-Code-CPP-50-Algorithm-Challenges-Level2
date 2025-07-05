#include <iostream>

using namespace std;

// Function: ReadPassword
// Purpose: Prompts the user to enter a 3-letter password (all uppercase letters).
// Returns: The password entered by the user as a string.
string ReadPassword()
{
    string Password;

    cout << "Please enter a 3-Letter Password (all capital)?\n";
    cin >> Password;

    return Password; 
}

// Function: GuessPassword
// Purpose: Tries to brute-force guess a 3-letter password by generating all possible combinations
//          of uppercase letters from 'A' to 'Z'. Displays each trial attempt.
// Parameters:
//    - Password: the actual password input by the user.
// Returns: true (1) if the password is found, false (0) otherwise.
bool GuessPassword(string Password) {
    string word = "";
    int x = 1;
    bool isTrue = false;
        for (int i = 65; i <= 90; i++) {
            for (int j = 65; j <= 90; j++) {
                for (int k = 65; k <= 90; k++) {
                    word.append(1, char(i));
                    word.append(1, char(j));
                    word.append(1, char(k));
                    cout << "Trial[" << x << "] :" << word << endl;
                    if (word == Password) {
                        cout << "Your Password is : " << Password << endl;
                        cout << "Found after " << x << " Trial(s)\n";
                        return 1;
                    }
                    word = "";
                    x++;
                }
            }
        }
        return 0;
}

int main()
{
    GuessPassword(ReadPassword());

    return 0;
}