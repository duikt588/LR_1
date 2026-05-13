#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Number: ";
    cin >> n; 
    if (isPrime(n)) {
        cout << n << " prime number" << endl;
    } else {
        cout << n << " not prime number" << endl;
    }
    return 0;
}
