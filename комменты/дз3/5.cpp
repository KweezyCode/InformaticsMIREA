#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    setlocale(0, "");
    string x; // строка из 30 букв

    getline(cin, x); // ввод строки
    
    // Сортировка букв в строке в алфавитном порядке
    for (int i = 0; i < x.length() - 1; i++) {
        for (int j = i; j < x.length() - 1; j++) { 
            if (x[i] > x[j + 1]) {
                swap(x[i], x[j + 1]); // обмен местами букв, если они стоят не по порядку
            }
        }
    }
    cout << x << endl; // вывод отсортированной строки
}