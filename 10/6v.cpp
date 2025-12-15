#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int M = 4;
    const int N = 7;
    int mas[M][N];

    cout << "Input " << M * N << endl;

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

    int min_val = mas[0][0];
    int min_i = 0;
    int min_j = 0;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (mas[i][j] < min_val) {
                min_val = mas[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }

    cout << "\nR: " << min_val << endl;
    cout << "L: [" << min_i << "][" << min_j << "]" << endl;

    return 0;
}
