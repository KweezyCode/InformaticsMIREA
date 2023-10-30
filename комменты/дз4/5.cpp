#include <iostream> // Библиотека для ввода/вывода
#include <cmath> // Библиотека для математических функций

using namespace std;

int main() {
    char m[20][120]; // Массив для хранения графика

    // Заполняем массив пробелами
    for (int x = 0; x < 20; x++) {
        for (int y = 0; y < 120; y++) {
            m[x][y] = ' ';
        }
    }

    // Рисуем ось Y
    for (int x = 0; x < 20; x++) {
        m[x][60] = '|';
    }

    // Рисуем ось X
    for (int y = 0; y < 120; y++) {
        m[10][y] = '-';
    }

    int x;
    // Рисуем график функции sin(x)
    for (int y = 0; y < 120; y++) {
        x = sin(y/20.)*10;
        m[x+10][y] = 'X';
    }

    // Выводим график на экран
    for (int x = 0; x < 20; x++) {
        for (int y = 0; y < 120; y++) {
            cout << m[x][y];
        }
        cout << endl;
    }

    return 0;
}

