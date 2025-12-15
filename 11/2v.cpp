#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Time {
    int hours;
    int minutes;
};

bool is_valid_input_2(int h, int m) {
    if (h < 0 || h > 23) {
        cout << "0-24" << endl;
        return false;
    }
    if (m < 0 || m > 59) {
        cout << "0-59" << endl;
        return false;
    }
    return true;
}

int main() {
    Time start_time, end_time;

    do {
        cout << "Start:" << endl;
        cout << "0-23: ";
        cin >> start_time.hours;
        cout << "0-59: ";
        cin >> start_time.minutes;
    } while (!is_valid_input_2(start_time.hours, start_time.minutes));

    do {
        cout << "\nFinish:" << endl;
        cout << "0-23: ";
        cin >> end_time.hours;
        cout << "0-59: ";
        cin >> end_time.minutes;
    } while (!is_valid_input_2(end_time.hours, end_time.minutes));


    int total_start_minutes = start_time.hours * 60 + start_time.minutes;
    int total_end_minutes = end_time.hours * 60 + end_time.minutes;

    int duration_minutes;

    if (total_end_minutes >= total_start_minutes) {
        duration_minutes = total_end_minutes - total_start_minutes;
    } else {

        duration_minutes = (total_end_minutes + 24 * 60) - total_start_minutes;
    }

    int duration_hours = duration_minutes / 60;
    int remaining_minutes = duration_minutes % 60;

    cout << "\nR:" << endl;
    cout << "N: " << setfill('0') << setw(1) << duration_hours
         << ":" << setfill('0') << setw(2) << remaining_minutes << endl;

    return 0;
}
