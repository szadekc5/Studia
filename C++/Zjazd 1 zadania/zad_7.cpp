#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_CTYPE, "Polish");

    string liczbaPierwsza = "3";
    string liczbaDruga;

    if (liczbaPierwsza.empty())
    {
        cout << "Podaj liczbę nr 1:";
        cin >> liczbaPierwsza;

        
    }
    else if(liczbaDruga.empty())
    {
        cout << "Podaj liczbę nr 2:";
        cin >> liczbaDruga;
    }

    double liczbaPierwsza_double = stod(liczbaPierwsza);
    double liczbaDruga_double = stod(liczbaDruga);
   
    
    cout << "Suma obu liczb wynosi " << liczbaPierwsza_double + liczbaDruga_double << endl;
    cout << "Iloczyn obu liczb wynosi " << liczbaPierwsza_double * liczbaDruga_double << endl;
    cout << "Średnia obu liczb wynosi " << (liczbaPierwsza_double + liczbaDruga_double)/2 << endl;

    return 0;



}
