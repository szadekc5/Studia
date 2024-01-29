#include <iostream>
#include <string>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "Polish"); // polskie znaki z zad 2
    //zmienne pod imie i rok rozpoczecia studiow

    int rokRozpoczeciaStudiow;
    
    std::string imie;

    std::cout << "Podaj swoje imię :) " << std::endl;

    std::cin >> imie;

    std::cout << "Podaj rok rozpoczęcia studiów :) " << std::endl;

    std::cin >> rokRozpoczeciaStudiow;

    std::cout << "Witaj " << imie << ", student/ka od " << rokRozpoczeciaStudiow << " roku!";


    return 0;
}
 

// String wykorzystuje inną bibliotekę/inne funkcję niż tablica do operacji porównawczych czy wyświetlenia ilości znaków w tablicy / stringu. STRING i CSTRING 
// funkcja strncmp przyjmuje inne wartości porównując tablicę niż .compare() w stringu - efekt jest taki sam.

