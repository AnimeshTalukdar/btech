#include <iostream>

void print(const int *arr, const int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void print(const int *matrix, const int rows, const int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i * cols + j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int oneD[5] = {1, 2, 3, 4, 5};
    print(oneD, 5);

    int twoD[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(twoD[0], 3, 3);

    return 0;
}
