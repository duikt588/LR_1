#include <iostream>
using namespace std;

int main() {
    int m, n;
    int k = 1;
    cout << "m";
    cin >> m;
    cout << "n";
    cin >> n;

    long p = m;


    while (p <= n) {
        k++;
        p *= m;
    }

    cout << k;
    return 0;
}
