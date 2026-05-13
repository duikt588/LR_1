#include <iostream>
using namespace std;

int main(void) {
    int a = 0, b = 0, c = 0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    try {
        if (b == 0) {
            throw "Your input is not valid, you can't divide by zero.";
        }
        c = a / b;
    }
    catch (...) {
        cout << "Your input is not valid, you can't divide by zero." << endl;
    }
    cout << c << endl;
    return 0;
}
