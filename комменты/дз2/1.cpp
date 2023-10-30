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
    int r1; // радиус нижней основы усеченного конуса
    int r2; // радиус верхней основы усеченного конуса
    int h;  // высота усеченного конуса
    int l;  // образующая усеченного конуса

    cin >> r1; 
    cin >> r2;
    cin >> h;
    
    // Проверка на отрицательные значения радиусов и высоты
    if (r1 < 0 or r2 < 0 or h < 0) {
        print("нельзя такие числа");
        return 0;
    }
    
    // Вычисление образующей усеченного конуса
    l = sqrt(r1*r1+h*h);

    print("V:");
    // Вычисление объема усеченного конуса по формуле V = 1/3ph(R2+Rr+r2)
    print((1./3) * M_PI * (r1*r1 + r1 * r2 + r2*r2) * h);

    print("S:");
    // Вычисление полной поверхности усеченного конуса по формуле S = p(R2+(R+r)l+r2)
    print(M_PI * (r1 * r1 + l*(r1+r2) + r2*r2));
    
    return 0;
}