#include <iostream>
using namespace std;

int main() {
    long long d = 1;

    for (int i = 4; i < 40; i += 4) {
        d *= i;
    }
    cout << "d = " << d;
    return 0;
}
