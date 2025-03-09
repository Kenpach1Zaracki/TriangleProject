#include <iostream>
#include <cmath>

using namespace std;

// проверка треугольника на равнобедренность
bool isIsosceles(double a, double b, double c) {
    return (a == b) || (b == c) || (a == c);
}

// вычисление периметра треугольника
double trianglePerimeter(double a, double b, double c) {
    return a + b + c;
}

// вычисление площади через формулу Герона
double triangleArea(double a, double b, double c) {
    double half = (a + b + c) / 2.0; // вычисляем полупериметр
    return sqrt(half * (half - a) * (half - b) * (half - c));
}

int main() {
    double a, b, c;
    cout << "Введите длины сторон треугольника: ";
    cin >> a >> b >> c;
    
    // проверка на корректность введенных данных
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ошибка: треугольник с такими сторонами не может существовать." << endl;
        return 1;
    }
    cout << "Периметр треугольника: " << trianglePerimeter(a, b, c) << endl;
    cout << "Площадь (по формуле Герона): " << triangleArea(a, b, c) << endl;
    
    if (isIsosceles(a, b, c)) {
        cout << "Треугольник равнобедренный." << endl;
    } else {
        cout << "Треугольник не равнобедренный." << endl;
    }
    
    return 0;
}
