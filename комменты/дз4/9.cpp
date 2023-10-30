#include <iostream> // Библиотека для ввода/вывода
#include <cmath> // Библиотека для математических функций
#include <sstream> // Библиотека для работы со строковыми потоками

using namespace std;

// Функция для преобразования десятичного числа в шестнадцатеричное
string DecimalToHexadecimal(int decimalNumber) {
    stringstream ss;
    ss << hex << decimalNumber;
    return ss.str();
}

// Функция для преобразования шестнадцатеричного символа в десятичное число
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

// Функция для преобразования шестнадцатеричного числа в десятичное
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

// Функция для преобразования десятичного числа в число с произвольным основанием
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
    int n; // Старое основание
    int m; // Новое основание
    string a; // Исходное число

    cin >> a; // Ввод исходного числа
    cin >> n; // Ввод старого основания
    cin >> m; // Ввод нового основания
    
    // Вывод числа в новом основании
    cout << DecimalToCustomBase(HexToDecimal(a, n), m) << endl;
    
    return 0;
}