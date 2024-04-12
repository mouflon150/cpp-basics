// Задача 1
//#include <iostream>
//using namespace std;
//void inputArray(int arr[], int size) {
//    cout << "Введите элементы массива:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cin >> arr[i];
//    }
//}
//void outputArray(int arr[], int size) {
//    cout << "Элементы массива:" << endl;
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//int minElement(int arr[], int size) {
//    int min = arr[0];
//    for (int i = 1; i < size; ++i) {
//        if (arr[i] < min) {
//            min = arr[i];
//        }
//    }
//    return min;
//}
//int maxElement(int arr[], int size) {
//    int max = arr[0];
//    for (int i = 1; i < size; ++i) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//double averageMinMax(int min, int max) {
//    return (min + max) / 2.0;
//}
//int main() {
//    setlocale(LC_ALL, "");
//    const int SIZE = 5;
//    int arr[SIZE];
//    inputArray(arr, SIZE);
//    outputArray(arr, SIZE);
//    int minValue = minElement(arr, SIZE);
//    int maxValue = maxElement(arr, SIZE);
//    cout << "Минимальный элемент: " << minValue << endl;
//    cout << "Максимальный элемент: " << maxValue << endl;
//    double average = averageMinMax(minValue, maxValue);
//    cout << "Среднее арифметическое минимального и максимального элементов: " << average << endl;
//    return 0;
//}

// Задача 2
//#include <iostream>
//using namespace std;
//int** multiplyMatrices(int** A, int** B, int n, int m, int l) {
//    int** C = new int* [n];
//    for (int i = 0; i < n; i++) {
//        C[i] = new int[l];
//        for (int k = 0; k < l; k++) {
//            C[i][k] = 0;
//            for (int j = 0; j < m; j++) {
//                C[i][k] += A[i][j] * B[j][k];
//            }
//        }
//    }
//    return C;
//}
//int main() {
//    int n = 2, m = 3, l = 2;
//    int** A = new int* [n];
//    int** B = new int* [m];
//    for (int i = 0; i < n; i++) {
//        A[i] = new int[m];
//        for (int j = 0; j < m; j++) {
//            A[i][j] = i + j;
//        }
//    }
//    for (int i = 0; i < m; i++) {
//        B[i] = new int[l];
//        for (int j = 0; j < l; j++) {
//            B[i][j] = i - j;
//        }
//    }
//    int** C = multiplyMatrices(A, B, n, m, l);
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < l; j++) {
//            cout << C[i][j] << " ";
//        }
//        cout << endl;
//    }
//    for (int i = 0; i < n; i++) {
//        delete[] A[i];
//    }
//    delete[] A;
//
//    for (int i = 0; i < m; i++) {
//        delete[] B[i];
//    }
//    delete[] B;
//
//    for (int i = 0; i < n; i++) {
//        delete[] C[i];
//    }
//    delete[] C;
//    return 0;
//}

// Задача 3
//#include <iostream>
//using namespace std;
//const int SIZE = 6;
//void inputMatrix(int matrix[][SIZE]) {
//    std::cout << "Введите элементы матрицы " << SIZE << "x" << SIZE << ":" << endl;
//    for (int i = 0; i < SIZE; ++i) {
//        for (int j = 0; j < SIZE; ++j) {
//            cin >> matrix[i][j];
//        }
//    }
//}
//void outputMatrix(int matrix[][SIZE]) {
//    cout << "Матрица " << SIZE << "x" << SIZE << ":" << endl;
//    for (int i = 0; i < SIZE; ++i) {
//        for (int j = 0; j < SIZE; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//void rowSums(int matrix[][SIZE], int sums[]) {
//    for (int i = 0; i < SIZE; ++i) {
//        sums[i] = 0;
//        for (int j = 0; j < SIZE; ++j) {
//            sums[i] += matrix[i][j];
//        }
//    }
//}
//int maxRowSum(int sums[]) {
//    int maxSum = sums[0];
//    for (int i = 1; i < SIZE; ++i) {
//        if (sums[i] > maxSum) {
//            maxSum = sums[i];
//        }
//    }
//    return maxSum;
//}
//int main() {
//    int matrix[SIZE][SIZE];
//    int sums[SIZE];
//    inputMatrix(matrix);
//    outputMatrix(matrix);
//    rowSums(matrix, sums);
//    int maxSum = maxRowSum(sums);
//    cout << "Наибольшее значение суммы элементов строк: " << maxSum << endl;
//    return 0;
//}

// Задача 4
#include <iostream>
using namespace std;
const int ROWS = 6;
const int COLS = 9;
double findMin(const double matrix[][COLS]) {
    double min = matrix[0][0];
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }
    return min;
}
double findMax(const double matrix[][COLS]) {
    double max = matrix[0][0];
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    return max;
}
int main() {
    double matrix[ROWS][COLS];
    cout << "Введите элементы матрицы " << ROWS << "x" << COLS << ":" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> matrix[i][j];
        }
    }
    double min = findMin(matrix);
    double max = findMax(matrix);
    double average = (min + max) / 2.0;
    cout << "Минимальное значение: " << min << endl;
    cout << "Максимальное значение: " << max << endl;
    cout << "Среднее арифметическое: " << average << endl;
    return 0;
}
