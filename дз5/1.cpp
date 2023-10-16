#include <iostream>
using namespace std;

int fun1(int a, int b) { // Делением
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return abs(a);
}

int fun2(int a, int b) { // Вычитанием
    while (a != 0 && b != 0) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return abs(a + b);
}

int main() {
    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    cout << "НОД (метод деления): " << fun1(a, b) << endl;
    cout << "НОД (метод вычитания): " << fun2(a, b) << endl;
    return 0;
}