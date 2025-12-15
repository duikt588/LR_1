#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int M = 4;
    const int N = 6;
    int mas[M][N];

    cout << "Input " << endl;

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
        long long col_sum = 0;
        for (int i = 0; i < M; ++i) {
            col_sum += mas[i][j];
        }
        cout << "R" << col_sum << endl;
    }

    return 0;
}
