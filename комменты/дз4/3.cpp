#include <iostream> // Библиотека для ввода/вывода
#include <cmath> // Библиотека для математических функций
using namespace std;

// Функция для вывода любого типа данных
template <typename T>
void print(T var)
{
    cout << var << endl;
}

// Функция для вычисления площади треугольника по формуле Герона
double треугольник(double a, double b, double c) {
    double p;
    p = (a+b+c) / 2; // Вычисление полупериметра
    return sqrt(p * (p - a) * (p - b) * (p - c)); // Вычисление площади
}

// Функция для вычисления площади прямоугольника
double прямоугольник(double a, double b) {
    return a*b;
}

// Функция для вычисления площади круга
double круг(double r) {
    return M_PI * pow(r, 2);
}

int main()
{
    double a; double b; double c; // Стороны треугольника
    double d; double e; // Стороны прямоугольника
    double r; // Радиус круга
    
    cin >> a; cin >> b; cin >> c;
    cin >> d; cin >> e;
    cin >> r;
    
    // Проверка на отрицательные значения
    if (a < 0 || b < 0 || c < 0 || d < 0 || e < 0 || r < 0) {
        print("Нельзя такие числа");
        return 0;
    }

    print(треугольник(a,b,c)); // Вывод площади треугольника
    print(прямоугольник(d,e)); // Вывод площади прямоугольника
    print(круг(r)); // Вывод площади круга

    return 0;

}