#include <iostream>
using namespace std;

int main() {
    int a[10] = {3, -5, 7, -2, 9, -8, 4, -1, 6, 0};
    int i;
    int max = a[0];
    int indexMax = 0;

    for (i = 1; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
            indexMax = i;
        }
    }

    for (i = 0; i < indexMax; i++) {
        if (a[i] < 0) {
            a[i] = 0;
        }
    }

    cout << "Range:\n";
    for (i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
