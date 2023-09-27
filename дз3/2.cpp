#include <iostream>
#include <math.h>
using namespace std;

int main() {
double S;
double n;
double mTest;
double m;
double r;
double interval = 0.0001;

cin >> S;
cin >> n;
cin >> mTest;
  

if (n == 0 or S <= 0) {
  cout << "нельзя такие числа";
  main();
  }

while (m < mTest) {
  r = interval;
  m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
  interval = interval + 0.0001;
  }

cout << "p = " << (int)(r * 100) << "%" << endl;  
main();
}