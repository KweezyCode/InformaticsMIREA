#include <iostream>
#include <vector>
using namespace std;

bool hasUniqueDigits(int n) {
    vector<bool> digits(10, false);
    while (n > 0) {
        int digit = n % 10;
        if (digits[digit]) return false;
        digits[digit] = true;
        n /= 10;
    }
    return true;
}

bool hasUniqueDigits(int n) {
    vector<bool> digits;
    int digit1 = n % 10;
    int digit2 = (n / 10) % 10;
    int digit3 = (n / 100) % 10;
    int digit4 = (n / 1000) % 10;

    if (digits[digit1]) return false;
    digits[digit1] = true;
    if (digits[digit2]) return false;
    digits[digit2] = true;
    if (digits[digit3]) return false;
    digits[digit3] = true;
    if (digits[digit4]) return false;
    return true;
}

int main() {
    for (int i = 1000; i <= 9999; ++i) {
        if (hasUniqueDigits(i)) {
            cout << i << endl;
        }
    }
    return 0;
}
