#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Открываем файл для чтения и записи
    fstream f ("4.txt", fstream::in | fstream::out | fstream::trunc);
    // Записываем строку в файл
    f << "abababab2ubdudbubudadua2b28932038";

    string s;
    // Перемещаем указатель на начало файла
    f.seekp(0);

    // Читаем строку из файла
    f >> s;

    // Проходим по всей строке
    for (int i = 0; i <= s.length(); i++) {
        // Если текущий символ является числом, выводим его на экран
        if (isdigit(s[i])) {
           cout << s[i] << endl;
        }
    }
    
    return 0;
}