#include <iostream>
using namespace std;

int main() {
    int num;
    unsigned long long factorial = 1; // Use unsigned long long for large results

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " is: " << factorial << endl;
    }

    return 0;
}

