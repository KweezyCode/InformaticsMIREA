#include <iostream> // Библиотека для ввода-вывода
#include <fstream> // Библиотека для работы с файлами

using namespace std; // Использование пространства имен std

// Функция для вывода значения любого типа
template <typename T>
void print(T var)
{
    cout << var << endl;
}

int main()
{
    // Создаем файловый поток и открываем файл "3.txt" для чтения и записи
    fstream f ("3.txt", fstream::in | fstream::out | fstream::trunc);
    
    // Записываем строку в файл
    f << "abababab2ubdudbubudadua2b28932038";

    string s; // Переменная для хранения содержимого файла

    // Перемещаем указатель на начало файла
    f.seekp(0);

    // Читаем содержимое файла в строку
    f >> s;
    
    // Выводим содержимое файла на экран
    cout << s;
    
    print(""); // Выводим пустую строку
    
    return 0;
}