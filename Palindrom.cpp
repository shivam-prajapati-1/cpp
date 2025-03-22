#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0, digit;

    while (num > 0) {
        digit = num % 10;       // Get the last digit
        reversed = reversed * 10 + digit;  // Append it to reversed
        num /= 10;              // Remove the last digit
    }

    return original == reversed; // Check if original and reversed are equal
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a Palindrome number.\n";
    else
        cout << num << " is not a Palindrome number.\n";

    return 0;
}

