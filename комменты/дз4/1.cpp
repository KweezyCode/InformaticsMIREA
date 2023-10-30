#include <iostream> // Библиотека для ввода/вывода
#include <fstream>  // Библиотека для работы с файлами

using namespace std;

int main() {
  int i = 0; // Счетчик чисел
  double sum = 0; // Сумма чисел
  double digital = 0; // Число, вводимое пользователем
  
  ofstream file("41.txt"); // Создание файла
  while (i != 10) { // Цикл для записи 10 чисел
        i += 1;
        if (cin >> digital) { // Ввод числа пользователем
                file << digital << "\n"; // Запись числа в файл
          }
        else { // Если ввод некорректен, выводим сообщение об ошибке и завершаем программу
                cout << "Incorrect input!" << endl;
                return 0;
        }
  }
  file.close(); // Закрытие файла после записи
  
  ifstream ifile("41.txt"); // Открытие файла для чтения
  while (i != 20) { // Цикл для суммирования чисел из файла
        ifile >> digital; // Чтение числа из файла
    sum += digital; // Добавление числа к сумме
    i += 1;
  }
  ifile.close(); // Закрытие файла после чтения
  
  cout << "SUM = " << sum << endl; // Вывод суммы чисел
  return 0;
}