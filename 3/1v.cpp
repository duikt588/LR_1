#include <iostream>
using namespace std;

int main() {
    int N = 357;

    int a = N / 100;
    int b = (N / 10) % 10;
    int c = N % 10;
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
     cout << "p: " << p << endl;
     
    return 0;
}
