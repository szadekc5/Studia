#include <iostream>
#include <algorithm>

void statystykiTablicy(int tablica[], int rozmiar) {
    if (rozmiar == 0) {
        std::cout << "Tablica jest pusta." << std::endl;
        return;
    }

    // Sortowanie tablicy
    std::sort(tablica, tablica + rozmiar);

    // Suma, średnia, minimum i maksimum
    int suma = 0;
    for (int i = 0; i < rozmiar; ++i) {
        suma += tablica[i];
    }
    double srednia = static_cast<double>(suma) / rozmiar;
    int minimum = tablica[0];
    int maksimum = tablica[rozmiar - 1];

    // Mediana
    int mediana;
    if (rozmiar % 2 == 0) {
        mediana = (tablica[rozmiar / 2 - 1] + tablica[rozmiar / 2]) / 2;
    }
    else {
        mediana = tablica[rozmiar / 2];
    }

    // Wypisanie wyników
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Średnia: " << srednia << std::endl;
    std::cout << "Minimum: " << minimum << std::endl;
    std::cout << "Maksimum: " << maksimum << std::endl;
    std::cout << "Mediana: " << mediana << std::endl;
}

int main() {
    const int rozmiar = 5;
    int tablica[rozmiar] = { 5, 2, 8, 1, 3 };

    // Wywołaj funkcję wypisującą statystyki
    statystykiTablicy(tablica, rozmiar);

    return 0;
}
