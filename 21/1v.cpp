#include <iostream>
using namespace std;

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved) {
        this->id = id;
        this->capacity = capacity;
        this->reserved = reserved;
    }

    void printStatus() {
        double percentage = 0;
        if (capacity > 0) {
            percentage = (double)reserved / capacity * 100.0;
        }
        cout << "Flight " << id << " : " << reserved << "/" << capacity 
             << " (" << percentage << "%) seats taken" << endl;
    }
private:
    int id;
    int capacity;
    int reserved;
};

int main() {
    int reserved = 0;
    int capacity = 0;
    cout << "Flight capacity: ";
    cin >> capacity;
    cout << "Reserved seats: ";
    cin >> reserved;
    FlightBooking booking(1, capacity, reserved);
    booking.printStatus();
    return 0;
}
