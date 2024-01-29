#include <iostream>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Zamień miejscami elementy, jeśli są w złej kolejności
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int size = 5;
    int arr[size] = { 5, 3, 1, 4, 2 };

    std::cout << "Tablica przed sortowaniem: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    // Wywołaj funkcję sortującą
    bubbleSort(arr, size);

    std::cout << "\nTablica po sortowaniu: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
