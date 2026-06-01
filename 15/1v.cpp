#include <iostream>
using namespace std;

bool isLeap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}
int main(void) {
    for(int year = 1995; year < 2017; year++)
        cout << year << " -> " << isLeap(year) << endl;
    return 0;
}
