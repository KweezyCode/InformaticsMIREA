#include <iostream>

using namespace std;

int main()
{
    // Проходим по значениям x от -4 до 4 с шагом 0.5
    for (float x = -4; x <= 4; x+=0.5) {
        // Проверяем, не равно ли x единице, так как при x = 1 функция не определена
        if (x == 1) {
            cout << "x != 1" << endl;
            continue;
        }
        cout << "-----" << endl;
        // Выводим значение x
        cout << "x = " << x << endl;
        // Выводим значение функции (x*x - 2*x + 2) / (x - 1) для данного x
        cout << "f(x) = " << (x*x - 2*x + 2) / (x - 1) << endl;
    }
    return 0;
}