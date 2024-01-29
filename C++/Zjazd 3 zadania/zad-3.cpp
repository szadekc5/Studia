#include <iostream>

// Funkcja liczaca silnie za pomocą pętli
int silniaPetla(int n) {
    int wynik = 1;
    for (int i = 2; i <= n; ++i) {
        wynik *= i;
    }
    return wynik;
}

// Funkcja liczaca silnie za pomocą rekurencji
int silniaRekurencja(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * silniaRekurencja(n - 1);
}

int main() {
    int liczba;

    std::cout << "Podaj liczbe, dla ktorej chcesz policzyc silnie: ";
    std::cin >> liczba;

    // Użycie funkcji liczącej silnię za pomocą pętli
    std::cout << "Silnia (petla) z " << liczba << " to: " << silniaPetla(liczba) << std::endl;

    // Użycie funkcji liczącej silnię za pomocą rekurencji
    std::cout << "Silnia (rekurencja) z " << liczba << " to: " << silniaRekurencja(liczba) << std::endl;

    return 0;
}
