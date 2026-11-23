#include <iostream>
using namespace std;

// Рекурсивная функция для поиска максимума
// arr - массив, n - текущий размер (индекс последнего элемента + 1)
int findMax(int arr[], int n) {
    // Базовый случай: если в массиве остался один элемент, он и есть максимум
    if (n == 1) {
        return arr[0];
    }

    // Рекурсивный шаг: находим максимум в оставшейся части массива
    int maxOfRest = findMax(arr, n - 1);

    // Сравниваем последний элемент с максимумом из оставшейся части
    if (arr[n - 1] > maxOfRest) {
        return arr[n - 1];
    } else {
        return maxOfRest;
    }
}

int main() {
    // Тестовый массив
    int arr[] = {3, 7, 2, 9, 5, 1, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Максимальный элемент: " << findMax(arr, n) << endl;

    return 0;
}
