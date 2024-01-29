#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pl_PL.utf8");
        int suma = 0;
        int sumaParzyste = 0;

        for (int i = 1; i < 11; i++)
        {
            cout << "Wypisana liczba: " << i << endl;

            suma = suma + i;

            cout << "Aktualna suma wynosi: " << suma << endl;

            if (i % 2 == 0)
            {
                sumaParzyste = sumaParzyste + i;
                cout << "Aktualna suma przysta wynosi: " << sumaParzyste << endl;
            }



        }
    return 0;
}