#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    
    double pi4 = 0.; 
    long n; 
    cout << setprecision(20);
    cout << "Number of iterations? "; 
    cin >> n; 

    for (long i = 0; i < n; i++) {
        double d = (2. * i) + 1.;
        if (i % 2 == 0) {
            pi4 += (1. / d);
        } else {
            pi4 -= (1. / d);
        }
    }

    cout << "Pi = " << (pi4 * 4.) << endl;  
    return 0; 
}

