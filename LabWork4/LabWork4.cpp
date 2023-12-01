// LabWork4.cpp : Одномерные и двумерные массивы.
//

#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    // Задача #1
    /*int arr[5] = { -2, 3, 2, -1, -4 };
    for (int i = 0; i < 5; i++) {
        if (arr[i] > 0) {
            cout << arr[i] << endl;
        }
    }
    return 0;*/

    // Задача #2
    /*int arr[] = { 3, 6, -3, 2, 4, -1 };
    for (int i = 0; i < 6; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << endl;
            break;
        }
    }
    return 0;*/

    // Задача #3
    /*int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    for (int i = 0; i < N; ++i) {
        if (arr[i] > 10) {
            cout << i << " ";
        }
    }
    return 0;*/


   // Задача #4
    /*float x = 0, sum = 0, T;
    float t[7] = { 7.2, -4, -2, 14, 10, -1 };
    for (int i = 0; i < 7; i++) {
        if (t[i] < 0) {
            x++;
        }
        sum += t[i];
    }
    T = sum / 7;
    cout << T << endl << x;
    return 0;*/

    // Задача #5
    /*int n;
    cout << "Введите количество элементов в последовательности: ";
    cin >> n;
    int a[n];
    cout << "Введите элементы последовательности:\n";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i += 2) {
        if (a[i] % 2 != 0) {
            count++;
        }
    }
    cout << "Количество членов последовательности с четными порядковыми номерами и нечетными значениями: " << count << endl;
    return 0;*/

    // Задача #6
    /*int n = 0;
    int a[9];
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 8; i++) {
        if (a[i] <= a[i + 1]) {
            cout << "не убыв." << endl;
            n = 1;
            break;
        }
    }
    if (n == 0) {
        cout << "убыв." << endl;
    }
    return 0;*/

	// Задача #7
    /*int k = 0, n;
    cin >> n;
    int a[10];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            k++;
        }
    }
    cout << k << endl;
    return 0;*/

    // Задача #8
    /*int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maxElement = a[0];
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > maxElement) {
            maxElement = a[i];
            maxIndex = i;
        }
    }
    if (maxIndex != 0) {
        int temp = a[0];
        a[0] = maxElement;
        a[maxIndex] = temp;
    }*/
    
    // Задача #9
    /*const int rows = 3;
    const int cols = 4;
    int array[rows][cols];
    cout << "Введите элементы двумерного массива " << rows << "x" << cols << ":\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "array[" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }
    int maxElement = array[0][0];
    int maxRow = 0;
    int maxCol = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] > maxElement) {
                maxElement = array[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    cout << "Наибольший элемент: " << maxElement << endl;
    cout << "Номер строки: " << maxRow << endl;
    cout << "Номер столбца: " << maxCol << endl;
    return 0;*/

    // Задача #10
    
}