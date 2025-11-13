#include <iostream>
using namespace std;

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0;
    for (int i = 0; i < rowSize; i++) {
        sum += m[i][columnIndex];
    }
    return sum;
}

int main() {
    const int ROWS = 5;
    double matrix[ROWS][SIZE] = {
        {5, 3, 1, 6},
        {-5, 2, 1, 5},
        {6, 6, 1, 6},
        {-3, 11, 2, 55},
        {0, 4, 0, 4}
    };

    cout << "Matrix:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int c = 0; c < SIZE; c++) {
        cout << "Sum of column " << c << " = " << sumColumn(matrix, ROWS, c) << endl;
    }

    return 0;
}
