#include <iostream>
using namespace std;

bool isLeap(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
int monthLength(int year, int month) {
    int lengths[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeap(year)) {
        return 29;
    }
    
    return lengths[month];
}

int main(void) {
    for(int year = 2000; year < 2002; year++) {
        for(int month = 1; month <= 12; month++)
            cout << monthLength(year, month) << " ";
        cout << endl;
    }
    return 0;
}
