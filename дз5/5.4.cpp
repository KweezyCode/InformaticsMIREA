// Создать файл из N вещественных чисел в десятичной системе счисления. В другой файл
// записать эти числа, переведенные из исходного файла в любую систему счисления по желанию
// пользователя в пределах от двоичной до девятеричной.

#include <fstream>
#include <set>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> words;
    string word;

    ifstream inputFile("input.txt");
    while (inputFile >> word) {
        words.push_back(word);
    }
    inputFile.close();

    words.push_back("новое_слово");

    ofstream outputFile("input.txt");
    sort(words.begin(), words.end());
    for (string w : words) {
        outputFile << w << '\n';
    }
    outputFile.close();

    return 0;
}
