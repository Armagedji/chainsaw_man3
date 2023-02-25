#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double r, x, y;
    cout << "Введите данные первой окружности (радиус и координаты): ";
    cin >> r >> x >> y;
    circle c1(r, x, y);
    cout << "Введите данные второй окружности (радиус и координаты): ";
    cin >> r >> x >> y;
    circle c2(r, x, y);
    cout << "Введите данные третьей окружности (радиус и координаты): ";
    cin >> r >> x >> y;
    circle c3(r, x, y);
    cout << "Изменение данных первой окружности: ";
    cin >> r >> x >> y;
    c1.set_circle(r, x, y);
    cout << "Площадь второй окружности: ";
    cout << c2.square() << endl;
    cout << "Проверка на возможность описать окружность 3 вокруг треугольника (ввести длину сторон треугольника): ";
    cin >> r >> x >> y;
    cout << c3.triangle_around(r, x, y) << endl;
    cout << "Проверка на возможность вписать окружность 3 в треугольник (ввести длину сторон треугольника): ";
    cin >> r >> x >> y;
    cout << c3.triangle_in(r, x, y) << endl;
    cout << "Проверка на пересечение окружности 1 с окружностью с координатами a, b, c: ";
    cin >> r >> x >> y;
    cout << c1.check_circle(r, x, y);

}