#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string password;
    getline(cin, password);
    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;
    bool ok = true;
    if (password.length() < 8) {
        cout << "The password must be 8 characters long" << endl;
        ok = false;
    }
    for (int i = 0; i < password.length(); i++) {
        char c = password[i];
        if (isupper(c)) upper = true;
        else if (islower(c)) lower = true;
        else if (isdigit(c)) digit = true;
        else special = true;
    }
    if (!upper) {
        cout << "The password must have at least one upper case letter" << endl;
        ok = false;
    }
    if (!digit) {
        cout << "The password must have at least one digit" << endl;
        ok = false;
    }

    if (!special) {
        cout << "The password must have at least one special character" << endl;
        ok = false;
    }
    if (ok) {
        cout << "The password is valid" << endl;
    }
    return 0;
}
