#include <iostream> // Библиотека для ввода/вывода данных
#include <string> // Библиотека для работы со строками
#include <set> // Библиотека для работы с контейнером set

using namespace std;

// Функция для проверки числа на наличие повторяющихся цифр
bool func(int n) {
    string a = to_string(n); // Преобразование числа в строку
    set<char> s(a.begin(), a.end()); // Создание множества из символов строки (удаляются повторяющиеся символы)

    return s.size() != 4 ? true : false; // Если размер множества не равен 4 (число цифр в числе), то в числе есть повторяющиеся цифры
}

int main() {
    for (int i = 1000; i <= 9999; i++) { // Перебор всех четырехзначных чисел
        if (!func(i)) { // Если функция вернула false, то в числе нет повторяющихся цифр
            std::cout << i << std::endl; // Вывод числа
        }
    }
    return 0;
}