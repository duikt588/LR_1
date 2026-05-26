#include <iostream>
using namespace std;

bool isLeap(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
int monthLength(int year, int month) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (isLeap(year)) return 29;
            else return 28;
        default:
            return 0;
    }
}
int main(void) {
    for(int year = 2000; year < 2002; year++) {
        for(int month = 1; month <= 12; month++)
            cout << monthLength(year, month) << " ";
        cout << endl;
    }
    return 0;
}
