#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int M = 6;
    const int N = 4;
    int mas[M][N];

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

    for (int j = 0; j < N; ++j) {
        int count_even = 0;
        for (int i = 0; i < M; ++i) {
            if (mas[i][j] % 2 == 0) {
                count_even++;
            }
        }
        cout << "R " << j << ": " << count_even << endl;
    }

    return 0;
}
