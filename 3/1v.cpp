#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;
    int p = 1;

    if (a % 2 != 0) {
        p *= a;
    }
    if (b % 2 != 0) {
        p *= b;
    }
    if (c % 2 != 0) {
        p *= c;
    }
     cout << "p: " << p;
     
    return 0;
}
