#include <iostream>

using namespace std;

// Function: TableHeader
// Purpose: Prints the header row of the multiplication table (1 to 10).
void TableHeader() {
    cout << "\n\n\t\t\tMultiplication Table From 1 to 10\n\n";
    cout << "\t";
    for (int Counter = 1; Counter <= 10; Counter++) {
        cout << Counter << "\t";
    }
    cout << "\n----------------------------------------------------------------------------------------\n";
}

// Function: ColumnSeprator
// Purpose: Returns proper spacing to align columns, especially for single-digit row numbers.
// Parameter: i - the current row number
// Returns: A string used as a visual separator after the row number.
string ColumnSeprator(int i) {
    if (i < 10)
        return "   |";
    else
        return "  |";
}

// Function: PrintMultiplicationTable
// Purpose: Generates and prints the complete multiplication table (1 to 10).
void PrintMultiplicationTable() {
    TableHeader();
    for (int Counter = 1; Counter <= 10; Counter++) {
        cout << " " << Counter << ColumnSeprator(Counter) << "\t";
        for (int i = 1; i <= 10; i++) {
            cout << Counter * i << "\t";
        }
        cout << endl;
    }
}

int main()
{
    PrintMultiplicationTable();
    return 0;
}