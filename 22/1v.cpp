#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class Fraction {
public:
    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    string toString() {
        int n = numerator;
        int d = denominator;
        string sign = "";
        if ((n < 0 && d > 0) || (n > 0 && d < 0)) {
            sign = "-";
        }
        long long abs_n = abs((long long)n);
        long long abs_d = abs((long long)d);
        int whole = abs_n / abs_d;
        int remainder = abs_n % abs_d;
        if (remainder == 0) {
            return sign + to_string(whole);
        }
        if (whole == 0) {
            return sign + to_string(remainder) + "/" + to_string(abs_d);
        }
        return sign + to_string(whole) + " " + to_string(remainder) + "/" + to_string(abs_d);
    }
    double toDouble() {
        return (double)numerator / denominator;
    }
private:
    int numerator;
    int denominator;
};
int main(void) {
    int num, den;
    string input = "";
    getline(cin, input);
    size_t slash_pos = input.find('/');
    if (slash_pos != string::npos) {
        num = stoi(input.substr(0, slash_pos));
        den = stoi(input.substr(slash_pos + 1));
        Fraction fraction(num, den);
        cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;
    }

    return 0;
}
