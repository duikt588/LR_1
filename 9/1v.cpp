#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int n = 10;
    int a[n];
    int i;

    srand(time(0));

    cout << "R:\n";
    for (i = 0; i < n; i++) {
        a[i] = rand() % 41 - 20;
        cout << a[i] << " ";
    }
    cout << endl;

    int min = a[0], max = a[0];
    int minIndex = 0, maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            minIndex = i;
        }
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }

    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;

    cout << "R:\n";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
