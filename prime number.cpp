#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) 
        return false;
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) 
            return false;  // If divisible, not prime
    }
    
    return true;  // Prime if no factors found
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a Prime number.\n";
    else
        cout << num << " is not a Prime number.\n";

    return 0;
}


