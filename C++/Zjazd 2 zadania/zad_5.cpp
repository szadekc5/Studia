#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pl_PL.utf8");

    // Tworzenie tablicy liczb zmiennoprzecinkowych
    const int rozmiar = 10;
    float tablica[rozmiar] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10 };

    // Wyświetlanie elementów od końca
    cout << "Elementy od końca: ";
    for (int i = rozmiar - 1; i >= 0; --i) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    // Wyświetlanie co trzeciego elementu
    cout << "Co trzeci element: ";
    for (int i = 0; i < rozmiar; i += 3) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}
