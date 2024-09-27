#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 3;

void replaceFirstRowWithThirdRow(int arr[ROWS][COLS]) {
    for (int i = 0; i < COLS; ++i) {
        int temp = arr[0][i];
        arr[0][i] = arr[2][i];
        arr[2][i] = temp;
    }
}

void printArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
          cout << arr[i][j] << " ";
        }
        cout << std::endl;
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

 cout << "Original Array:" << endl;
    printArray(arr);

    replaceFirstRowWithThirdRow(arr);

cout << "\nArray after replacing first row with third row:" <<endl;
    printArray(arr);

    return 0;
}

