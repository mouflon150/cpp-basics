﻿// LabWork2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14;

int main()
{
    setlocale(LC_ALL, "RUS");

    // Задача #1
    /*double x, f;

    cout << "Введите x: "; 
    cin >> x;

    if (x <= 0)
        f = 0;
    else if (0 < x <= 1)
        f = pow(x, 2) - x;
    else
        f = pow(x, 2) - sin(pi * (x * x));
    cout << f;
    return 0;*/

    // Задача #2
    /*double a, b, c, d, x, x1, x2;

    cout << "Введите действительные числа a, b, c через пробел: ";
    cin >> a; cin >> b; cin >> c;

    d = b * b - 4 * a * c;
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Уравнение имеет два корня: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } 
    else if (d == 0) {
        x = - b / (2 * a);
        cout << "x = " << x << endl;
    }
    else {
        cout << "Корней нет";
    }
    return 0;*/

    // Задача #3
    /*double x, y, z;
    bool checking = true;

    cout << "Введите действительные числа x, y, z через пробел: ";
    cin >> x; cin >> y; cin >> z;

    if ((x + y) < z)
        checking = false;
    else if ((x + z) < y)
        checking = false;
    else if ((z + y) < x)
        checking = false;

    if (checking == true)
        cout << "Треугольник существует";
    else
        cout << "Такого треугольника нет!";
    return 0;*/

    // Задача #4
    /*double a, b, c;
    
    cout << "Введите три действительных числа через пробел: ";
    cin >> a; cin >> b; cin >> c;

    if (a > 0) 
        cout << "Квадрат первого числа: " << pow(a, 2) << endl;
    if (b > 0) 
        cout << "Квадрат второго числа: " << pow(b, 2) << endl;
    if (c > 0)
        cout << "Квадрат третьего числа: " << pow(c, 2) << endl;
    return 0;*/

    // Задача #5
    double a, b, c;

    cout << "Введите 3 действительных числа через пробел: ";
    cin >> a; cin >> b; cin >> c;

    if (1 <= a && a <= 3) {
        cout << a << " принадлежит интервалу [1, 3]" << endl;
    }
    if (1 <= b && b <= 3) {
        cout << b << " принадлежит интервалу [1, 3]" << endl;
    }
    if (1 <= c && c <= 3) {
        cout << c << " принадлежит интервалу [1, 3]" << endl;
    }
    return 0;
   
}