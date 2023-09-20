#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

template <typename T>
void print(T var)
{
    cout << var << endl;
}



int main()
{
    double a; double b; double c;
    double d; double e;
    double r;
    
    cin >> a; cin >> b; cin >> c;
    cin >> d; cin >> e;
    cin >> r;

    print(треугольник(a,b,c));
    print(прямоугольник(d,e));
    print(круг(r));

    return 0;

}
double треугольник(double a, double b, double c) {
    double p;
    p = (a+b+c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double прямоугольник(double a, double b) {
    return a*b;
}

double круг(double r) {
    return M_PI * pow(r, 2);
}