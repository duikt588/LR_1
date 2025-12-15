#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int M = 3;
    const int N = 4;
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

    int max_val = mas[0][0];
    int max_i = 0;
    int max_j = 0;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            if (mas[i][j] > max_val) {
                max_val = mas[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    cout << "\nR: " << max_val << endl;
    cout << "N: [" << max_i << "][" << max_j << "]" << endl;

    return 0;
}
