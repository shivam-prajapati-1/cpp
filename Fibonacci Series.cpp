#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, next;
    
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0)
        cout << "Please enter a positive number.\n";
    else
        fibonacci(n);

    return 0;
}

