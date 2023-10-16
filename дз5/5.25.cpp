#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isSorted(const string& str) {
    for (size_t i = 1; i < str.size(); ++i) {
        if (str[i] < str[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ofstream file("textfile.txt");
    file << "abc\n";
    file << "def\n";
    file << "ghi\n";
    file << "jkl\n";
    file << "dda\n";
    file.close();

    ifstream inputFile("textfile.txt");
    string line;
    int count = 0;

    while (getline(inputFile, line)) {
        if (!line.empty() && isSorted(line)) {
            ++count;
        }
    }

    cout << "Кол-во сортированных: " << count << endl;

    return 0;
}