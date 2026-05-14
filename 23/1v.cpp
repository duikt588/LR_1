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
    string toString() {
        int n = numerator;
        int d = denominator;
        string sign = "";
        if ((n < 0 && d > 0) || (n > 0 && d < 0)) sign = "-";
        long long abs_n = abs((long long)n);
        long long abs_d = abs((long long)d);
        int whole = abs_n / abs_d;
        int remainder = abs_n % abs_d;
        if (remainder == 0) return sign + to_string(whole);
        if (whole == 0) return sign + to_string(remainder) + "/" + to_string(abs_d);
        return sign + to_string(whole) + " " + to_string(remainder) + "/" + to_string(abs_d);
    }
    Fraction plus(Fraction that) {
        return Fraction(this->numerator * that.denominator + that.numerator * this->denominator, 
                        this->denominator * that.denominator);
    }
    Fraction minus(Fraction that) {
        return Fraction(this->numerator * that.denominator - that.numerator * this->denominator, 
                        this->denominator * that.denominator);
    }
    Fraction times(Fraction that) {
        return Fraction(this->numerator * that.numerator, 
                        this->denominator * that.denominator);
    }
    Fraction by(Fraction that) {
        return Fraction(this->numerator * that.denominator, 
                        this->denominator * that.numerator);
    }
private:
    int numerator;
    int denominator;
    int gcd(int a, int b) {
        a = abs(a);
        b = abs(b);
        while (b) {
            a %= b;
            swap(a, b);
        }
        return a;
    }
    void reduce() {
        int common = gcd(numerator, denominator);
        numerator /= common;
        denominator /= common;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
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
    cout << f1.toString() << " + " << f2.toString() << " = " << f1.plus(f2).toString() << endl;
    cout << f1.toString() << " - " << f2.toString() << " = " << f1.minus(f2).toString() << endl;
    cout << f1.toString() << " * " << f2.toString() << " = " << f1.times(f2).toString() << endl;
    cout << f1.toString() << " / " << f2.toString() << " = " << f1.by(f2).toString() << endl;
    return 0;
}
