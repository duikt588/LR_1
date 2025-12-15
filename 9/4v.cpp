#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int n = 10;
    int a[n];
    int i;
    bool found = false;

    srand(time(0));

    cout << "R:\n";
    for (i = 0; i < n; i++) {
        a[i] = rand() % 11 - 5;
        cout << a[i] << " ";
    }
    cout << endl;

    for (i = 0; i < n; i++) {
        if (a[i] == 0) {
            cout << "R: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "False" << endl;
    }

    return 0;
}
