#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Введите три числа: ";
    cin >> a >> b >> c;

    // Меняем местами, если стоят не по порядку
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    cout << "Числа по возрастанию: " << a << " " << b << " " << c << endl;

    return 0;
}
