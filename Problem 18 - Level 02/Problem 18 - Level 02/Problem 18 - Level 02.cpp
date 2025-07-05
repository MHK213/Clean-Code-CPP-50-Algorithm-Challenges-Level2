#include <iostream>
#include <string>

using namespace std;

// Function: ReadText
// Purpose: Prompts the user to enter a line of text.
// Returns: The entire input line as a string.
string ReadText()
{
    string Text;

    cout << "Please enter a Text\n";
    getline(cin, Text);

    return Text;
}

// Function: EncryptText
// Purpose: Encrypts a given text using a Caesar cipher by shifting each character forward by EncryptionKey positions.
// Parameters: 
//    - Text: the original text to encrypt
//    - EncryptionKey: the integer key to use for shifting
// Returns: Encrypted version of the input text
string EncryptText(string Text, short EncryptionKey) {
    for (int i = 0; i < Text.length(); i++) {
        Text[i] += EncryptionKey;
    }
    return Text;
}

// Function: DecryptText
// Purpose: Decrypts an encrypted string by reversing the Caesar cipher shift.
// Parameters:
//    - CryptedText: the encrypted string to decrypt
//    - EncryptionKey: the same key used for encryption
// Returns: Decrypted (original) text
string DecryptText(string CryptedText, short EncryptionKey) {
    for (int i = 0; i < CryptedText.length(); i++) {
        CryptedText[i] -= EncryptionKey;
    }
    return CryptedText;
}

int main()
{
    const short EncryptionKey = 2;
    string OriginalText = ReadText();
    cout << "Text before cryption : " << OriginalText << endl;
    cout << "Text after cryption : " << EncryptText(OriginalText, EncryptionKey) << endl;
    cout << "Text after decryption : " << DecryptText(EncryptText(OriginalText, EncryptionKey), EncryptionKey) << endl;

    return 0;
}