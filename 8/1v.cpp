#include <iostream>
using namespace std;

int main() {
    int a[12] = {5, -3, 10, 0, 7, 2, -8, 4, 1, 9, -1, 6};
    int i, j, temp;

    cout << "First:\n";
    for (i = 0; i < 12; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (i = 0; i < 11; i++) {
        for (j = i + 1; j < 12; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "Second:\n";
    for (i = 0; i < 12; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    for (i = 0; i < 11; i++) {
        for (j = i + 1; j < 12; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "M:\n";
    for (i = 0; i < 12; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
