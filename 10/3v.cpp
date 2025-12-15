#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int M = 5;
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

    for (int i = 0; i < M; ++i) {
        long long row_sum = 0;
        for (int j = 0; j < N; ++j) {
            row_sum += mas[i][j];
        }
        cout << "R " << i << row_sum << endl;
    }

    return 0;
}
