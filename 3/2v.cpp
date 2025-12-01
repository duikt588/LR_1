#include <iostream>
using namespace std;

int main() {
    int n = 1;

    switch(n) {
        case 1:
            cout << "F: Lviv, T: Odesa" << endl;
            break;
        case 2:
            cout << "F: Odesa, T: Lviv" << endl;
            break;
        case 3:
            cout << "F: Dnipro, T: Lviv" << endl;
            break;
        case 4:
            cout << "F: Kharkiv, T: Dnipro" << endl;
            break;
        case 5:
            cout << "F: Kharkiv, T: Odesa" << endl;
            break;
        case 6:
            cout << "F: Poltava, T: Dnipro" << endl;
            break;
        case 7:
            cout << "F: Dnipro, T: Kharkiv" << endl;
            break;
    }
    return 0;
}
