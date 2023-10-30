#include <iostream> // Библиотека для ввода-вывода
#include <fstream> // Библиотека для работы с файлами

using namespace std; // Использование пространства имен std

int main()
{
    // Открываем файл для чтения и записи, если файла нет, то он будет создан
    fstream f ("4.txt", fstream::in | fstream::out | fstream::trunc);

    // Записываем строку в файл
    f << "abababab2ubdudbubudadua2b28932038";

    string s; // Строка для хранения прочитанного текста

    // Перемещаем указатель на начало файла
    f.seekp(0);

    // Читаем строку из файла
    f >> s;

    // Выводим прочитанную строку на экран
    cout << s << endl;
    
    return 0;
}