#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0, digit;
    
    while (num > 0) {
        digit = num % 10;          // Extract the last digit
        reversed = reversed * 10 + digit; // Append digit to reversed number
        num /= 10;                 // Remove the last digit
    }
    
    return reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number: " << reverseNumber(num) << endl;

    return 0;
}

