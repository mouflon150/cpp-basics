// LabWork2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

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
    else if (0 < x && x <= 1)
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
    /*double a, b, c;

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
    return 0;*/

    // Задача #6
    /*int x, y;
    cout << "Введите x, y: ";
    cin >> x >> y;
    if (x < y)
        cout << "x= " << (x + y) / 2 << endl
        << "y= " << 2 * (x + y) << endl;
    else
        cout << "x= " << 2 * (x + y) << endl
        << "y= " << (x + y) / 2 << endl;
    system("pause");
    return (0);*/

    // Задача #7
    /*double x, y, z;
    cout << "Введите x,y,z: " << endl;
    cin >> x >> y >> z;

    if (x + y + z < 1) {
        if ((x < y) && (x < z))
            x = (y + z) / 2;
        else if (y < z)
            y = (x + z) / 2;
        else
            z = (x + y) / 2;
    }
    else {
        if (x < y)
            x = (y + z) / 2;
        else
            y = (x + z) / 2;
    }
    cout << x << " " << y << " " << z;
    system("pause");
    return 0;*/

    // Задача #8
    /*int x;

    cout << "Сколько Вам лет?" << endl;
    cin >> x;

    if (x > 0 && x < 100)
        cout << "Вам " << x << " лет.";
    system("pause");
    return 0;*/

    // Задача #9
    /*double a, b, c;

    cout << "Введите действительные числа a, b, c: " << endl;
    cin >> a >> b >> c;

    if (a >= b && b >= c) {
        a *= a;
        b *= b;
        c *= c;
    }
    else {
        a = abs(a);
        b = abs(b);
        c = abs(c);
    }
    cout << a << " " << b << " " << c << endl;
    system("pause");
    return 0;*/

    // Задача #10
    /*int n;

    cout << "Введите натуральное числое до 9999: ";
    cin >> n;
    if (n <= 9999) {
        if ((n % 10 == n / 1000) && ((n / 10) % 10 == (n / 100) % 10))
            cout << "Palindrome" << endl;
        else
            cout << "Not palindrome" << endl;
    }
    system("pause");
    return 0;*/

    // Задача #11
    /*int A, B, C, N, P;
    cout << "Введите A B C\n";
    cin >> A >> B >> C;
    cout << "Введите время разговора (min)\n";
    cin >> N;
    if (N <= A) {
        cout << "Уложились в норму (min)\n";
        P = B;
    }
    else {
        P = B + ((N - A) * C);
        cout << "Не уложились в норму (min)\n";
    }
    cout << "Плата составила " << P << " руб. " << endl;
    system("pause");
    return 0;*/

    // Задача #12
    /*char answer;

    cout << "Кто ты: девочка или мальчик? Введите D или M\n";
    cin >> answer;

    switch (answer) {
    case 'D':
        cout << "Мне нравятся девочки!";
        break;
    case 'M':
        cout << "Мне нравятся маль чики!";
        break;
    default:
        cout << "Либо Д, либо М - третьего не дано!";
        break;
    }
    system("pause");
    return 0;*/

    // Задача #13
    /*double v1, v2, t, t1;

    cout << "Введите скорость грузового автомобиля (км/ч): ";
    cin >> v1;
    cout << "Введите скорость легкового автомобиля (км/ч): ";
    cin >> v2;
    cout << "Введите время движения грузового автомобиля (часы): ";
    cin >> t;
    cout << "Введите время после выезда легкового автомобиля (часы): ";
    cin >> t1;

    double distance_by_truck = v1 * t;
    double distance_by_car = v2 * (t + t1);

    if (distance_by_car >= distance_by_truck) {
        cout << "Легковой автомобиль догонит грузовой автомобиль." << endl;
    }
    else {
        cout << "Легковой автомобиль не догонит грузовой автомобиль." << endl;
    }
    return 0;*/

    // Задача #14
    /*int x, y;

    cout << "Введите значение переменной x: ";
    cin >> x;

    cout << "Введите значение переменной y: ";
    cin >> y;

    if (x < y) {
        int temp = x;
        x = y;
        y = temp;
    }

    cout << "Перераспределенные значения: x = " << x << ", y = " << y << endl;
    return 0;*/

    // Задача #15
    /*int day, month;

    cout << "Введите число (от 1 до 31): ";
    cin >> day;
    cout << "Введите месяц (от 1 до 12): ";
    cin >> month;

    if (day >= 1 && day <= 31 && month >= 1 && month <= 12) {
        cout << "Введенная дата корректна." << endl;
    }
    else {
        cout << "Введенная дата некорректна." << endl;
    }
    system("pause");
    return 0;*/

    // Задача #16
    int n;

    cout << "Введите количество лепестков (целое число): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Гадание на ромашке: Любит!" << endl;
    }
    else {
        cout << "Гадание на ромашке: Не любит!" << endl;
    }
    return 0;
}