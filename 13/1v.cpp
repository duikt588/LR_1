#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    const int N = 5;
    int matrix[N][N];
    srand(time(0));
    int *p = (int *)matrix;
    cout << "Matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            *(p + i * N + j) = rand() % 50 + 1;
            cout.width(4);
            cout << *(p + i * N + j);
        }
        cout << endl;
    }
  
    int e = 0;
    int o = 0;

    cout << "\nMain diagonal: ";
    for (int i = 0; i < N; i++) {
        cout << *(p + i * N + i) << " ";
    }

    cout << "\nSide diagonal: ";
    for (int i = 0; i < N; i++) {
        cout << *(p + i * N + (N - 1 - i)) << " ";
    }

    for (int i = 0; i < N * N; i++) {
        if (*(p + i) % 2 == 0) {
            e++;
        } else {
            o++;
        }
    }
    cout << "\nEven: " << e << endl;
    cout << "Odd: " << o << endl;

    return 0;
}
