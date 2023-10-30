#include <iostream> // Библиотека для ввода-вывода

using namespace std; // Использование пространства имен std

int main()
{
    // Задаем матрицы A и B, соответствующие таблицам продаж и комиссий
    double A[3][4] =
    {
        {5, 2, 0, 10},
        {3, 5, 2, 5},
        {20, 0, 0, 0}
    };
    double B[4][2] =
    {
        {1.20, 0.50},
        {2.80, 0.40},
        {5.00, 1.00},
        {2.00, 1.50}
    };

    // Создаем матрицу C для хранения результатов умножения
    double C[3][2]{};

    // Выполняем умножение матриц
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            for (int i = 0; i < 4; i++)
            {
                C[x][y] += A[x][i] * B[i][y];
            }
        }
    }

    // Выводим результаты умножения
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            cout << C[x][y] << " ";
        }
        cout << endl;
    }

    // Вычисляем и выводим статистику по продажам и комиссиям
    float max_price, min_price, max_com, min_com, all_price, all_com, total_cost;
    max_price = min_price = C[0][0];
    max_com = min_com = C[0][1];
    all_price = all_com = total_cost = 0;

    for (int i = 0; i < 3; i++) {
        all_price += C[i][0];
        all_com += C[i][1];
        if (C[i][0] > max_price) {
            max_price = C[i][0];
        }
        if (C[i][0] < min_price) {
            min_price = C[i][0];
        }
        if (C[i][1] > max_com) {
            max_com = C[i][1];
        }
        if (C[i][1] < min_com) {
            min_com = C[i][1];
        }
    }
    
    total_cost = all_price + all_com;

    cout << "Продавец с максимальной выручкой: " << max_price << endl;
    cout << "Продавец с минимальной выручкой: " << min_price << endl;
    cout << "Продавец с максимальными комиссионными: " << max_com << endl;
    cout << "Продавец с минимальными комиссионными: " << min_com << endl;
    cout << "Общая сумма денег от продаж: " << all_price << endl;
    cout << "Общая сумма комиссионных: " << all_com << endl;
    cout << "Общая сумма денег от продаж и комиссионных: " << total_cost << endl;
}