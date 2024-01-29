#include <iostream>
#include <cstring>  // Dla funkcji z biblioteki C

int main() {
    // Tablica znaków (char array)
    char textArray[] = "To jest przykladowy tekst";

    // Wyświetlanie zawartości tablicy znaków
    std::cout << "Tablica znakow: " << textArray << std::endl;

    // Pobieranie długości tablicy znaków (strlen)
    std::cout << "Dlugosc tekstu: " << strlen(textArray) << " znakow." << std::endl;

    // Zamiana małych liter na duże (toupper z wykorzystaniem toupper z biblioteki C)
    char upperCaseArray[100];
    strcpy_s(upperCaseArray, textArray);
    for (int i = 0; upperCaseArray[i]; ++i) {
        upperCaseArray[i] = toupper(upperCaseArray[i]);
    }

    // Wyświetlanie tablicy znaków z dużymi literami
    std::cout << "Duze litery: " << upperCaseArray << std::endl;
    std::cout << "Dlugosc tekstu: " << strlen(upperCaseArray) << " znakow." << std::endl;

    // Sprawdzanie czy tablica znaków rozpoczyna się od określonej frazy (strncmp)
    char prefix[] = "To jest";
    if (strncmp(textArray, prefix, strlen(prefix)) == 0) {
        std::cout << "Tekst zaczyna sie od: " << prefix << std::endl;
    }

    // Znajdowanie pozycji pierwszego wystąpienia frazy (strstr)
    char searchPhrase[] = "przykladowy";
    char* found = strstr(textArray, searchPhrase);
    if (found != nullptr) {
        std::cout << "Fraza '" << searchPhrase << "' znaleziona na pozycji: " << (found - textArray) << std::endl;
    }

    return 0;
}
 

// String wykorzystuje inną bibliotekę/inne funkcję niż tablica do operacji porównawczych czy wyświetlenia ilości znaków w tablicy / stringu. STRING i CSTRING 
// funkcja strncmp przyjmuje inne wartości porównując tablicę niż .compare() w stringu - efekt jest taki sam.

