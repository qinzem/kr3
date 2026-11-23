#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("input.txt");   // Открываем файл для чтения
    ofstream out("output.txt"); // Открываем файл для записи

    string lines[100]; // Массив для строк (максимум 100 штук)
    int count = 0;

    // Читаем строки из файла в массив
    while (getline(in, lines[count])) {
        count++;
    }

    // Пишем в обратном порядке
    for (int i = count - 1; i >= 0; i--) {
        out << lines[i] << endl;
    }

    in.close();
    out.close();
    return 0;
}
