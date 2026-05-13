#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

class IPAddress {
protected:
    string address;
public:
    IPAddress(string addr) : address(addr) {}
    IPAddress(const IPAddress &other) {
        address = other.address;
    }
    virtual void print() {
        cout << address;
    }
};
class IPAddressChecked : public IPAddress {
private:
    bool is_correct;
    bool validate(string addr) {
        stringstream ss(addr);
        string segment;
        int count = 0;
        while (getline(ss, segment, '.')) {
            count++;
            try {
                int val = stoi(segment);
                if (val < 0 || val > 255) return false;
            } catch (...) { return false; }
        }
        return count == 4;
    }
public:
    IPAddressChecked(string addr) : IPAddress(addr) {
        is_correct = validate(addr);
    }
    IPAddressChecked(const IPAddressChecked &other) : IPAddress(other) {
        is_correct = other.is_correct;
    }
    void print() override {
        IPAddress::print();
        if (is_correct) 
            cout << " - Correct";
        else 
            cout << " - Not Correct";
    }
};
int main() {
    string ip1;
    cin >> ip1;
    string ip2;
    cin >> ip2;
    string ip3;
    cin >> ip3;
    IPAddress addr1(ip1);
    IPAddressChecked addr2(ip2);
    IPAddressChecked addr3(ip3);
    addr1.print(); cout << endl;
    addr2.print(); cout << endl;
    addr3.print(); cout << endl;

    return 0;
}
