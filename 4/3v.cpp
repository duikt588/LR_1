#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n1 = 1;
    int n2 = 1;
    float r1 = 1.0f / n1;
    float r2 = 1.0f / n2;
    const float e = 0.000001;

    if (fabs(r1 - r2) < e) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }
    return 0;
}
