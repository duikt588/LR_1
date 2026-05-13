#include <iostream>
using namespace std;

const int DivideByZero = 111;
float internaldiv(float arg1, float arg2) {
    if (0 == arg2)
        throw DivideByZero;
    return arg1 / arg2;
}
float div_func(float arg1, float arg2) {
    return internaldiv(arg1, arg2);
}
int main(void) {
    float a, b;
    cout << "Enter two numbers: " << endl;
    while (cin >> a >> b) {
        try {
            float r = div_func(a, b);
            cout << r << endl;
        }
        catch (...) {
            cout << "Are you kidding me?" << endl;
            cout << "Your input is not valid. You can't divide by zero." << endl;
        }
    }
    return 0;
}
