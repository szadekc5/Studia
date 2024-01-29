#include <iostream>

// Funkcja odwracająca kolejność elementów w tablicy
void odwrocTablice(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar / 2; ++i) {
        // Zamień elementy tablicy
        std::swap(tablica[i], tablica[rozmiar - 1 - i]);
    }
}

int main() {
    const int rozmiar = 5;
    int tablica[rozmiar] = { 1, 2, 3, 4, 5 };

    std::cout << "Tablica przed odwróceniem: ";
    for (int i = 0; i < rozmiar; ++i) {
        std::cout << tablica[i] << " ";
    }

    // Wywołaj funkcję odwracającą kolejność elementów w tablicy
    odwrocTablice(tablica, rozmiar);

    std::cout << "\nTablica po odwróceniu: ";
    for (int i = 0; i < rozmiar; ++i) {
        std::cout << tablica[i] << " ";
    }

    return 0;
}
