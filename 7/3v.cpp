#include <iostream>
using namespace std;

int main(void) {
    const int MAX_SIZE = 25; 
    int n;
    cout << "Number" << MAX_SIZE;
    cin >> n;
    
    if (n <= 1) {
        cout << "Enter more than 1 " << endl;
        return 0;
    }

    if (n > MAX_SIZE) {
        cout << "Max size" << endl;
        return 0;
    }
    cout << '+';
    
    for(int i = 0; i < n - 2; i++) {
        cout << '-';
    }
    cout << '+' << endl;

    for(int i = 0; i < n - 2; i++) {
        cout << '|'; 
        
        for(int j = 0; j < n - 2; j++) {
            cout << ' ';
        }
        cout << '|' << endl;
    }
    cout << '+';
    for(int i = 0; i < n - 2; i++) {
        cout << '-';
    }
    cout << '+' << endl;
    
    return 0;
}
