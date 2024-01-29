#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "pl_PL.utf8");

    int rozmiar = 10;

    cout << "    |";
    for (int i = 1; i <= rozmiar; ++i) {
        cout << setw(4) << i << " ";
    }
    cout << endl << "----|--------------------------------------------------" << endl;

    for (int i = 1; i <= rozmiar; ++i) {
        cout << setw(3) << i << " |";
        for (int j = 1; j <= rozmiar; ++j) {
            cout << setw(4) << (i * j) << " ";
        }
        cout << endl;
    }

    return 0;
}

