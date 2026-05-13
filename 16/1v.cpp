#include <iostream>
#include <ctime>
using namespace std;

struct Date {
    int year, month, day;
};
bool isLeap(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
int monthLength(int year, int month) {
    int lengths[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeap(year)) return 29;
    return lengths[month];
}
Date today(void) {
    time_t t = time(NULL);
    tm tl = *localtime(&t);
    Date current;
    current.year = tl.tm_year + 1900;
    current.month = tl.tm_mon + 1;
    current.day = tl.tm_mday;
    return current;
}
long daysPassed(Date d) {
    long totalDays = 0;
    for (int y = 1; y < d.year; y++) totalDays += isLeap(y) ? 366 : 365;
    for (int m = 1; m < d.month; m++) totalDays += monthLength(d.year, m);
    totalDays += d.day;
    return totalDays;
}
int main() {
    Date t = today();
    cout << "Today is: " << t.year << "-" << t.month << "-" << t.day << endl;
    Date birth;
    cout << "Year: "; cin >> birth.year;
    cout << "Month: "; cin >> birth.month;
    cout << "Day: "; cin >> birth.day;
    long diff = daysPassed(t) - daysPassed(birth);
    cout << "\nDays from birthday: " << diff << endl;
    return 0;
}
