#include <iostream>
#include <cstring>  // Dla funkcji strcpy
#include <string>

int main() {
    // Tablica znaków (char array)
    char textArray[20];  // Tablica znaków o rozmiarze 20.

    // Przypisanie wartości do tablicy znaków
    strcpy_s(textArray, "Tablica znakow");


    // Tablica znaków musi mieć mniej lub tyle samo znaków co jej rozmiar.


    // Wyświetlenie zawartości tablicy znaków
    std::cout << "Tablica znakow: " << textArray << std::endl;

    // String (std::string)
    std::string textString = "String w C++";


    // String może mieć dowolny rozmiar.

    // Wyświetlenie zawartości stringa
    std::cout << "String: " << textString << std::endl;



    // Konkatenacja do tablicy znaków
    char nameArray[20];
    strcpy_s(nameArray, "Jan ");
    strcat_s(nameArray, "Kowalski");  // Funkcja strcat do konkatenacji

    // Tablica mimo dodania do niej tekstu za pomocą konkatenacji nadal musi mieć maksymalnie 20 znaków (w tym przypadku).

    // Wyświetlenie zawartości tablicy znaków po konkatenacji
    std::cout << "Tablica znakow po konkatenacji: " << nameArray << std::endl;


    // Konkatenacja do stringa
    std::string firstName = "Anna ";
    std::string lastName = "Nowak";


    // String składający się z dwóch zmiennych (stringów) nadal może mieć dowolną liczbę znaków.

    std::string fullName = firstName + lastName;  // Operator + do konkatenacji

    // Wyświetlenie zawartości stringa po konkatenacji
    std::cout << "String po konkatenacji: " << fullName << std::endl;

    return 0;
}
