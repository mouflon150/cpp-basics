#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14;

int main()
{
    setlocale(LC_ALL, "RUS");

    // Задача #1
    /*double d, l, s, r;

    cout << "Введите радиус: ";
    cin >> r;

    d = 2 * r;
    l = 2 * pi * r;
    s = pi * pow(r, 2);

    cout << "Диаметр: " << d << "\nДлина: " << l << "\nПлощадь круга: " << s << endl;
    return 0;*/

    // Задача #2
    /*double a, b, c ,s;

    cout << "Введите первый катет: ";
    cin >> a;
    cout << "Введите второй катет: ";
    cin >> b;

    s = (a * b) / 2;
    c = pow(a, 2) + pow(b, 2);
    
    cout << "Площадь треугольника: " << s << "\nГипотенуза: " << c << endl;
    return 0;*/

    // Задача #3
    /*double s, r1, r2;

    cout << "Внешний радиус: ";
    cin >> r2;
    r1 = 20; // Внутренний радиус
    if (r2 > 20) {
        s = pi * (pow(r2, 2) - pow(r1, 2));
        cout << "Площадь кольца: " << s << endl;
        return 0;
    } else {
        cout << "Где то произошла ошибка!";
        return 1;
    }*/

    // Задача #4
    /*double x, y, z, a, b;

    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Введите z: ";
    cin >> z;

    a = (sqrt(fabs(x - 1)) - pow(fabs(y), 1 / 3.0)) / (1 + pow(x, 2) / 2 + pow(y, 2) / 4);
    b = x * atan(z) + exp(-(x + 3));
   
    cout << "a равняется = " << a << endl;
    cout << "b равняется = " << b << endl;
    return 0;*/

    // Задача #5
   /* float a, b, c, h, cr;

    cout << "Введите длину большего основания трапеции: " << endl;
    cin >> a;
    cout << "Введите длину меньшего основания трапеции: " << endl;
    cin >> b;
    cout << "Введите угол при большем основании: " << endl;
    cin >> c;

    cr = c * (pi / 180);
    h = (a - b) / 2 * tan(cr);
    cout << "Площадь трапеции равна " << ((a + b) / 2) * h << endl;
    return 0;*/

    // Задача #6
    /*int a, b, c, p, s;

    cout << "Длина первой стороны треугольника: ";
    cin >> a;
    cout << "Длина второй стороны треугольника: ";
    cin >> b;
    cout << "Длина третьей стороны треугольника: ";
    cin >> c;

    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Площадь треугольника равна: " << s << endl;
    return 0;*/

    // Задача #7
    /*int a, b, sa, sg;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    sa = (a + b) / 2;
    sg = sqrt(a * b);

    cout << "Среднее арифметическое: " << sa << "\nСреднее геометрическое: " << sg;
    return 0;*/

    // Задача #8
    /*float x1, y1, x2, y2, l;

    cout << "Введите координаты первой точки (x1, y1) через пробел: ";
    cin >> x1; cin >> y1;
    cout << "Введите координаты первой точки (x2, y2) через пробел: ";
    cin >> x2; cin >> y2;
    
    l = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Расстояние: " << l << endl;
    return 0;*/

    // Задача #9
    /*int x, num1, num2, num3, num4;

    cout << "Введите четырехзначное число: ";
    cin >> x;

    num1 = x / 1000;
    num2 = (x / 100) % 10;
    num3 = (x % 100) / 10;
    num4 = x % 10;
 
    cout 
        << num1 << " - thousands\n" 
        << num2 << " - hundreds\n" 
        << num3 << " - tens\n" 
        << num4 << " - ones" << endl;
    return 0;*/
    
    // Задача #10
    /*int a, sgr, spoln, v;

    cout << "Введите ребро куба: ";
    cin >> a;
    
    sgr = pow(a, 2);
    spoln = 6 * sgr;
    v = pow(a, 3);

    cout 
        << "Площадь грани: " << sgr
        << "\nПлощадь полной поверхности: " << spoln
        << "\nОбъем: " << v << endl;
    return 0;*/

    // Задача #11
    /*double a, s, ri, rc, h;

     cout << "Введите размер стороны равносторенного треугольника: ";
    cin >> a;

    s = pow(a, 2) * sqrt(3) / 4;
    ri = a * sqrt(3) / 6;
    rc = a * sqrt(3) / 3;
    h = a * sqrt(3) / 2;

    cout << "Площадь: " << s << endl;
    cout << "Высота: " << h << endl;
    cout << "Радиус вписанной окружности: " << ri << endl;
    cout << "Радиус описанной окружности: " << rc << endl;
    return 0;*/
}