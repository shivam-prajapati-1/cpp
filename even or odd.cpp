#include <iostream>
using namespace std;

void checkEvenOdd(int num) {
    if (num % 2 == 0)
        cout << num << " is an Even number.\n";
    else
        cout << num << " is an Odd number.\n";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    checkEvenOdd(num);

    return 0;
}

