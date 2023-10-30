#include <iostream> // Библиотека для ввода/вывода
#include <fstream> // Библиотека для работы с файлами
#include <string> // Библиотека для работы со строками

using namespace std;

// Функция проверки, отсортированы ли символы в строке по возрастанию
bool isSorted(const string& str) {
    for (size_t i = 1; i < str.size(); ++i) {
        if (str[i] < str[i-1]) { // Если текущий символ меньше предыдущего,
            return false; // то строка не отсортирована
        }
    }
    return true; // Если все символы упорядочены, то строка отсортирована
}

int main() {
    ofstream file("textfile.txt"); // Создаем файл для записи
    file << "abc\n"; // Записываем строки в файл
    file << "def\n";
    file << "ghi\n";
    file << "jkl\n";
    file << "dda\n";
    file.close(); // Закрываем файл

    ifstream inputFile("textfile.txt"); // Открываем файл для чтения
    string line;
    int count = 0; // Счетчик отсортированных строк

    while (getline(inputFile, line)) { // Читаем строки из файла
        if (!line.empty() && isSorted(line)) { // Если строка не пустая и отсортирована,
            ++count; // увеличиваем счетчик
        }
    }

    cout << "Кол-во сортированных: " << count << endl; // Выводим количество отсортированных строк

    return 0;
}