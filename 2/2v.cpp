#include <iostream>
using namespace std;

int main() {
    double x = 1;   
    double y = 1;
    bool i;
    
    if (x >= -1 && x <= 0 && y >= 0 && y <= 1) {
        i = true;
    }
    if (x >= 0 && x <= 1 && y >= -1 && y <= 0) {
        i = true;
    }
  
    if (i)
        cout << "true";
    else
        cout << "false";
    return 0;
}
