#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int n = 10;
    int a[n];
    int i, A, count = 0;

    srand(time(0));

    cout << "R:\n";
    for (i = 0; i < n; i++) {
        a[i] = rand() % 41 - 20;
        cout << a[i] << " ";
    }
    cout << endl;

    A = rand() % 21;
    cout << "A = " << A << endl;

    for (i = 0; i < n; i++) {
        if (a[i] > A) {
            count++;
        }
    }

    cout << "R: " << count << endl;

    return 0;
}
