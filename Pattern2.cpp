#include <iostream>
using namespace std;

int main() {
    int rows = 5, colums = 4; // Number of rows and columns

    for (int i = 1; i <= rows; i++) { // Outer loop for rows
        for (int j = 1; j <= colums; j++) { // Inner loop for columns
            // Print '*' at the borders of the rectangle
            if (i == 1 || i == rows || j == 1 || j == colums)
                cout << "* ";
            else
                cout << "  "; // Print spaces inside the rectangle
        }
        cout << endl; // Move to the next line
    }

    return 0;
}

