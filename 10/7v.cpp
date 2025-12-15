#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int SIZE = 3;
    int mas[SIZE][SIZE];

    cout << "Input " << SIZE * SIZE << endl;

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "mas[" << i << "][" << j << "]: ";
            cin >> mas[i][j];
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << setw(5) << mas[i][j];
        }
        cout << endl;
    }

    long long main_diag_sum = 0;
    long long anti_diag_sum = 0;

    for (int i = 0; i < SIZE; ++i) {
        main_diag_sum += mas[i][i];
        anti_diag_sum += mas[i][SIZE - 1 - i];
    }

    cout << "\nR " << main_diag_sum << endl;
    cout << "E" << anti_diag_sum << endl;

    return 0;
}
