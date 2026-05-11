#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int n = 10;
    float *arr = new float[n];
    int pos = 0, neg = 0;
    cout << "Array:" << endl;
    for (int i = 0; i < n; i++) {
        arr[i] = (float(rand()) / float(RAND_MAX)) * 4.0 - 2.0;
        cout << arr[i] << "  ";
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
    }
    cout << "\n\nPositive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    delete[] arr;

    return 0;
}
