#include <iostream>
#include <string>
using namespace std;

class FlightBooking {
public:
    FlightBooking() { id = 0; capacity = 0; reserved = 0; }
    FlightBooking(int id, int capacity, int reserved) {
        this->id = id;
        this->capacity = capacity;
        if (reserved < 0) reserved = 0;
        if (reserved > capacity * 1.05) reserved = capacity * 1.05;
        this->reserved = reserved;
    }
    void printStatus() {
        if (id == 0) return; 
        double percentage = (double)reserved / capacity * 100.0;
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
    int getId() { return id; }

private:
    int id;
    int capacity;
    int reserved;
};
int main() {
    FlightBooking flights[10];
    string command = "";
    while (command != "quit") {
        bool empty = true;
        for (int i = 0; i < 10; i++) {
            if (flights[i].getId() != 0) {
                flights[i].printStatus();
                empty = false;
            }
        }
        if (empty) cout << "No flights" << endl;
        cout << "Command: ";
        cin >> command;

        if (command == "create") {
            int id, cap;
            cin >> id >> cap;
            for (int i = 0; i < 10; i++) {
                if (flights[i].getId() == 0) {
                    flights[i] = FlightBooking(id, cap, 0);
                    break;
                }
            }
        }
        else if (command == "delete") {
            int id;
            cin >> id;
            for (int i = 0; i < 10; i++) {
                if (flights[i].getId() == id) {
                    flights[i] = FlightBooking(0, 0, 0);
                    break;
                }
            }
        }
        else if (command == "add") {
            int id, n;
            cin >> id >> n;
            bool ok = false;
            for (int i = 0; i < 10; i++) {
                if (flights[i].getId() == id) {
                    if (!flights[i].add(n)) cout << "Cannot perform this operation" << endl;
                    ok = true;
                    break;
                }
            }
            if (!ok) cout << "Cannot perform this operation" << endl;
        }
        else if (command == "cancel") {
            int id, n;
            cin >> id >> n;
            bool ok = false;
            for (int i = 0; i < 10; i++) {
                if (flights[i].getId() == id) {
                    if (!flights[i].cancel(n)) cout << "Cannot perform this operation" << endl;
                    ok = true;
                    break;
                }
            }
            if (!ok) cout << "Cannot perform this operation" << endl;
        }
    }
    return 0;
}
