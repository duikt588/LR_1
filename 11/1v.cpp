#include <iostream>
#include <iomanip>

using namespace std;

struct Time {
    int hours;
    int minutes;
};

bool is_valid_input(int h, int m) {
    if (h < 0 || h >= 24) {
        cout << "0-24" << endl;
        return false;
    }
    if (m < 0 || m >= 60) {
        cout << "0-59" << endl;
        return false;
    }
    return true;
}

int main() {
    Time start_time;
    int duration_minutes;

    do {
        cout << "H: ";
        cin >> start_time.hours;
        cout << "E: ";
        cin >> start_time.minutes;
    } while (!is_valid_input(start_time.hours, start_time.minutes));

    cout << ": ";
    cin >> duration_minutes;

    int total_minutes = start_time.hours * 60 + start_time.minutes;

    total_minutes += duration_minutes;

    int new_hours = (total_minutes / 60) % 24;

    int new_minutes = total_minutes % 60;

    cout << "\nR" << endl;
    cout << "C: " << setfill('0') << setw(2) << new_hours 
         << ":" << setfill('0') << setw(2) << new_minutes << endl;

    return 0;
}
