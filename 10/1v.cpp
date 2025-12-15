#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int M = 4;
    const int N = 3;
    int mas[M][N];
    cout << "Input" << M * N << endl;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "mas[" << i << "][" << j << "]: ";
            cin >> mas[i][j];
        }
    }

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << setw(5) << mas[i][j];
        }
        cout << endl;
    }

    cout << "\nN:" << endl;
    for (int i = 0; i < M; ++i) {
        int count_even = 0;
        for (int j = 0; j < N; ++j) {
            if (mas[i][j] % 2 == 0) {
                count_even++;
            }
        }
        cout << "R " << i << ": " << count_even << endl;
    }

    return 0;
}
