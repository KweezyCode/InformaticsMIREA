#include <iostream>

using namespace std;

int main()
{
    // Объявление переменных a и b
    int a;
    int b;
    
    // Ввод чисел с клавиатуры
    cin >> a;
    cin >> b;

    // Вывод суммы чисел
    cout << a + b << endl;
    // Вывод разности чисел
    cout << a - b << endl;
    // Вывод произведения чисел
    cout << a * b << endl;
    
    // Проверка деления на ноль
    if (b == 0) {
        cout << "Нельзя делить на 0" << endl;
        return 0;
    }
    
    // Вывод частного от деления
    cout << a / b << endl;
    
    return 0;
}