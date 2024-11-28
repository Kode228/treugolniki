#include <iostream>
#include <cmath>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    double a, b, c, angle;

    cout << "Введите длину стороны a: ";
    cin >> a;
    cout << "Введите длину стороны b: ";
    cin >> b;
    cout << "Введите длину стороны c: ";
    cin >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Стороны треугольника должны быть положительными." << endl;
    }
    else if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Сумма любых двух сторон треугольника должна быть больше третьей." << endl;
    }
    else if (cin.fail()) {
        cout << "Введены недопустимые символы." << endl;
    }
    else {
        cout << "Введите угол между сторонами a и b: ";
        cin >> angle;

        if (angle <= 0 || angle >= 180) {
            cout << "Угол должен быть положительным и меньше 180 градусов." << endl;
        }
        else {
            if (angle == 90) {
                cout << "Треугольник прямоугольный." << endl;
            }
            else if (angle > 90) {
                cout << "Треугольник тупоугольный." << endl;
            }
            else {
                cout << "Треугольник остроугольный." << endl;
            }
        }
    }

    return 0;
}
