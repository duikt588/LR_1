#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cout << "N: ";
    cin >> a;
    cout << "N: ";
    cin >> b;
    cout << "N: ";
    cin >> c;
    cout << "N: ";
    cin >> d;

    if (a < 1 || a > 255 || b < 1 || b > 255 || c < 1 || c > 255 || d < 1 || d > 255) {
        cout << "Invalid IP number!" << endl;
    } else {
        cout << a << "." << b << "." << c << "." << d << endl;
    }

    return 0;
}
