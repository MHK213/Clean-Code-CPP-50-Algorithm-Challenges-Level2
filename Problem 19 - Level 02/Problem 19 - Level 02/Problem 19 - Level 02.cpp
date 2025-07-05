#include <iostream>
#include <cstdlib>

using namespace std;

// Function: RandomNumber
// Purpose: Generates a random number between From and To (inclusive)
int RandomNumber(int From, int To) {
    int RandNum = rand() % (To - From + 1) + From;

    return RandNum;
}

int main()
{
    srand((unsigned)time(NULL));

    cout << RandomNumber(1, 5) << endl;

    return 0;
}