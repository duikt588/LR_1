#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int rows = 3, cols = 3;
    int **matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    int even = 0, odd = 0;
    cout << "Matrix 3x3:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 20;
            cout.width(4);
            cout << matrix[i][j];
            if (matrix[i][j] % 2 == 0) even++;
            else odd++;
        }
        cout << endl;
    }
    cout << "\nMain diagonal: ";
    for (int i = 0; i < rows; i++) cout << matrix[i][i] << " ";

    cout << "\nSide diagonal: ";
    for (int i = 0; i < rows; i++) cout << matrix[i][rows - 1 - i] << " ";
    cout << "\n\nEven: " << even << "\nOdd: " << odd << endl;
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
