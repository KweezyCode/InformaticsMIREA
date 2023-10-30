#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
void print(T var)
{
    cout << var << endl;
}

int main()
{
    double m; // месячная выплата
    double S; // сумма займа
    double r; // процентная ставка в десятичном виде
    double n; // количество лет
    double p; // процентная ставка

    cin >> S;
    cin >> p;
    cin >> n;

    r = p / 100; // перевод процентной ставки в десятичный вид

    // Проверка на ноль в знаменателе формулы
    if (pow(1+r, n) != 1) {
        // Вычисление месячной выплаты по формуле m = (S*r*pow(1+r, n)) / (12 * (pow(1+r, n) - 1))
        m = (S*r*pow(1+r, n)) / (12 * (pow(1+r, n) - 1));
        print(m);
    }
    else {
        print("Нельзя такие числа");
        main();
    }
    

    return 0;
}