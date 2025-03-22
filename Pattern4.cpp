#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for(int i = 1; i <= n; i++) {  // Outer loop for rows
        for(int j = 1; j <= i; j++) {  // Inner loop for columns
            cout << i; // Print the current row number
        }
        cout << endl;
    }

    return 0;
}

