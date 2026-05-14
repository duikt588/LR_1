#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Fraction {
public:
    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
        this->reduce();
    }
    bool isGreaterThan(Fraction that) {
        return (double)this->numerator / this->denominator > (double)that.numerator / that.denominator;
    }
    bool isLessThan(Fraction that) {
        return (double)this->numerator / this->denominator < (double)that.numerator / that.denominator;
    }
    bool isEqual(Fraction that) {
        return this->numerator == that.numerator && this->denominator == that.denominator;
    }
    string toString() {
        int n = numerator;
        int d = denominator;
        string sign = "";
        if (n < 0) { sign = "-"; n = abs(n); }
        int whole = n / d;
        int remainder = n % d;
        if (remainder == 0) return sign + to_string(whole);
        if (whole == 0) return sign + to_string(remainder) + "/" + to_string(d);
        return sign + to_string(whole) + " " + to_string(remainder) + "/" + to_string(d);
    }
private:
    int numerator;
    int denominator;
    void reduce() {
        int a = abs(numerator);
        int b = abs(denominator);
        while (b) { a %= b; swap(a, b); }
        int gcd = a;
        numerator /= gcd;
        denominator /= gcd;
        if (denominator < 0) { numerator = -numerator; denominator = -denominator; }
    }
};
Fraction parseFraction(string input) {
    size_t slash = input.find('/');
    int n = stoi(input.substr(0, slash));
    int d = stoi(input.substr(slash + 1));
    return Fraction(n, d);
}
int main(void) {
    string input1, input2;
    if (!getline(cin, input1) || !getline(cin, input2)) return 0;
    Fraction f1 = parseFraction(input1);
    Fraction f2 = parseFraction(input2);
    if (f1.isGreaterThan(f2)) 
        cout << f1.toString() << " > " << f2.toString() << endl;
    else if (f1.isLessThan(f2)) 
        cout << f1.toString() << " < " << f2.toString() << endl;
    else if (f1.isEqual(f2)) 
        cout << f1.toString() << " == " << f2.toString() << endl;
    return 0;
}
