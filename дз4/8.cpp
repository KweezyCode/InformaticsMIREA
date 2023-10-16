#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
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

    double C[3][2]{};
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
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            cout << C[x][y] << " ";
        }
        cout << endl;
    }
    float max_price, min_price, max_com, min_com, all_price, all_com, total_cost, max_seller, min_seller, max_com_seller, min_com_seller;
    max_price = 0;
    max_seller = 0;
    min_price = 10000;
    min_seller = 0;
    max_com = 0;
    max_com_seller = 0;
    min_com = 10000;
    min_com_seller = 0;
    all_price = 0;
    all_com = 0;

    for (int i = 0; i < 3; i++) {
        all_price += C[i][0];
        all_com += C[i][1];
        if (C[i][0] > max_price) {
            max_price = C[i][0];
            max_seller = i + 1;
        }
        if (C[i][0] < min_price) {
            min_price = C[i][0];
            min_seller = i + 1;
        }
        if (C[i][1] > max_com) {
            max_com = C[i][1];
            max_com_seller = i + 1;
        }
        if (C[i][1] < min_com) {
            min_com = C[i][1];
            min_com_seller = i + 1;
        }
    }
    total_cost = all_price + all_com;

    cout << max_seller << "Макс" << max_price << endl;
    cout << min_seller << " Продавец получил меньше всего денег с продаж: " << min_price << endl;
    cout << max_com_seller << " Продавец получил наибольшие комиссионные: " << max_com << endl;
    cout << min_com_seller << " Продавец получил наименьшие комиссионные: " << min_com << endl;
    cout << "Общая сумма денег, вырученных за проданные товары: " << all_price << endl;
    cout << "Всего комиссионных получили продавцы: " << all_com << endl;
    cout << "Общая сумма денег, прошедших через руки продавцов: " << total_cost << endl;
    
}