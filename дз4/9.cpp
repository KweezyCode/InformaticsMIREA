#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <sstream>


using namespace std;

string DecimalToHexadecimal(int decimalNumber) {
    stringstream ss;
    ss << hex << decimalNumber;
    return ss.str(); // Добавляем префикс "0x" к шестнадцатеричному числу
}

int HexCharToDecimal(char hexChar) {
    if (hexChar >= '0' && hexChar <= '9') {
        return hexChar - '0';
    } else if (hexChar >= 'A' && hexChar <= 'F') {
        return 10 + hexChar - 'A';
    } else if (hexChar >= 'a' && hexChar <= 'f') {
        return 10 + hexChar - 'a';
    }
    cout << "err";
    return -1;
}

int HexToDecimal(string hexNumber, int n) {
    int decimalNumber = 0;
    int power = 0;
    for (int i = hexNumber.size() - 1; i >= 0; --i) {
        int digit = HexCharToDecimal(hexNumber[i]);
        decimalNumber += digit * pow(n, power);
        ++power;
    }
    return decimalNumber;
}

string DecimalToCustomBase(int decimalNumber, int base) {
    string result = "";
    while (decimalNumber > 0) {
        int remainder = decimalNumber % base;
        result = DecimalToHexadecimal(remainder) + result;
        decimalNumber /= base;
    }
    return result;
}

int main(){

    int n;
    int m;
    string a;

    cin >> n;
    cin >> m;
    cin >> a;

    
    cout << DecimalToCustomBase(HexToDecimal(a, n), m) << endl;
    
    return 0;

}

