#include <iostream>
using namespace std;

int gcd_division(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return abs(a);
}

int gcd_subtraction(int a, int b) {
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
    cout << "НОД (метод деления): " << gcd_division(a, b) << endl;
    cout << "НОД (метод вычитания): " << gcd_subtraction(a, b) << endl;
    return 0;
}