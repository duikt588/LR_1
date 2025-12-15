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

    int max1 = -1000, max2 = -1000;

    for (i = 0; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    cout << "R: " << max2 << endl;

    return 0;
}
