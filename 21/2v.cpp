#include <iostream>
#include <string>
using namespace std;

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved) {
        this->id = id;
        this->capacity = capacity;
        if (reserved < 0) reserved = 0;
        if (reserved > capacity * 1.05) reserved = capacity * 1.05;
        this->reserved = reserved;
    }
    void printStatus() {
        double percentage = 0;
        if (capacity > 0) percentage = (double)reserved / capacity * 100.0;
        cout << "Flight " << id << " : " << reserved << "/" << capacity 
             << " (" << percentage << "%) seats reserved" << endl;
    }
    bool add(int n) {
        if (n > 0 && (reserved + n) <= capacity * 1.05) {
            reserved += n;
            return true;
        }
        return false;
    }
    bool cancel(int n) {
        if (n > 0 && (reserved - n) >= 0) {
            reserved -= n;
            return true;
        }
        return false;
    }
private:
    int id;
    int capacity;
    int reserved;
};
int main() {
    int cap, res;
    cout << "Flight capacity: ";
    cin >> cap;
    cout << "Reserved seats: ";
    cin >> res;
    FlightBooking booking(1, cap, res);
    string command = "";
    while (command != "quit") {
        booking.printStatus();
        cout << "Command: ";
        cin >> command;
        if (command == "add") {
            int n;
            cin >> n;
            if (!booking.add(n)) cout << "Cannot perform this operation" << endl;
        } 
        else if (command == "cancel") {
            int n;
            cin >> n;
            if (!booking.cancel(n)) cout << "Cannot perform this operation" << endl;
        } 
        else if (command != "quit") {
            cout << "Quit" << endl;
        }
    }
    return 0;
}
