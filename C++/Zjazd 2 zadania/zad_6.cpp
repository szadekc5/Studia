#include <iostream>
#include <iomanip>
#include <random>
#include <cmath>

using namespace std;

int main() {
    // Ustawienia tablicy pięciowymiarowej
    const int dim1 = 2;
    const int dim2 = 3;
    const int dim3 = 4;
    const int dim4 = 5;
    const int dim5 = 6;

    // Tworzenie pięciowymiarowej tablicy liczb zmiennoprzecinkowych
    double tablica[dim1][dim2][dim3][dim4][dim5];

    // Generator liczb losowych
    random_device rd;
    mt19937 generator(rd());
    uniform_real_distribution<double> distribution(1.0, 10.0);

    // Wypełnianie tablicy losowymi liczbami
    for (int i = 0; i < dim1; ++i) {
        for (int j = 0; j < dim2; ++j) {
            for (int k = 0; k < dim3; ++k) {
                for (int l = 0; l < dim4; ++l) {
                    for (int m = 0; m < dim5; ++m) {
                        tablica[i][j][k][l][m] = distribution(generator);
                    }
                }
            }
        }
    }

    // Sumowanie wartości w tablicy
    double suma = 0.0;
    for (int i = 0; i < dim1; ++i) {
        for (int j = 0; j < dim2; ++j) {
            for (int k = 0; k < dim3; ++k) {
                for (int l = 0; l < dim4; ++l) {
                    for (int m = 0; m < dim5; ++m) {
                        suma += tablica[i][j][k][l][m];
                    }
                }
            }
        }
    }

    // Obliczanie średniej
    double srednia = suma / (dim1 * dim2 * dim3 * dim4 * dim5);

    // Wypisywanie wyników
    cout << "Suma: " << suma << endl;
    cout << "srednia: " << srednia << endl;
    cout << "srednia zaokraglona w dol: " << floor(srednia) << endl;
    cout << "srednia zaokraglona w gore: " << ceil(srednia) << endl;

    return 0;
}
