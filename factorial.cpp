#include <iostream>
using namespace std;

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;  // Multiply fact with i
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial of a negative number is not defined.\n";
    else
        cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}

