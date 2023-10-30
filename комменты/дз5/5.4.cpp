#include <fstream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> words; // Создаем вектор для хранения слов
    string word; // Создаем строку для временного хранения слова

    ifstream inputFile("input.txt"); // Открываем файл для чтения
    while (inputFile >> word) { // Читаем слова из файла
        words.push_back(word); // Добавляем каждое слово в вектор
    }
    inputFile.close(); // Закрываем файл

    words.push_back("новое_слово"); // Добавляем новое слово в вектор

    ofstream outputFile("input.txt"); // Открываем файл для записи
    sort(words.begin(), words.end()); // Сортируем слова в векторе
    for (string w : words) { // Проходим по каждому слову в векторе
        outputFile << w << '\n'; // Записываем каждое слово в файл
    }
    outputFile.close(); // Закрываем файл

    return 0; // Завершаем программу
}