#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    double b;
    double h;
    cout << ("a:");
    cin >> a;
    cout << ("b:");
    cin >> b;
    cout << ("h:");
    cin >> h;

    double x = a;

    cout << "----------------\n";
    cout << "|    X   |     Y|  \n";
    cout << "------------------\n";

    while (x <= b) {
        
        if (sin(x) < 0) {
            break;
        }

        double y = sqrt(sin(x)) + x * x;
        cout << "|  " << x << " |  " << y << " | \n";
        x += h;
    }
    cout << "------------------\n";
    return 0;
}
