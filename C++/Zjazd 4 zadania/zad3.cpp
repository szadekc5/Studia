#include <iostream>
#include <string>

int main() {
    // Używanie operatora >> do wczytywania danych do zmiennej typu int
    int integerVariable;
    std::cout << "Podaj liczbe calkowita (operator >>): ";
    std::cin >> integerVariable;
    std::cout << "Wczytana liczba: " << integerVariable << std::endl;

    // Użycie funkcji get do wczytania pojedynczego znaku ze strumienia wejściowego
    char singleChar;
    std::cout << "Podaj pojedynczy znak (get): ";
    std::cin.get(singleChar);
    std::cout << "Wczytany znak: " << singleChar << std::endl;

    // Użycie funkcji getline do wczytania całej linii tekstu ze strumienia wejściowego
    std::string line;
    std::cout << "Podaj cala linie tekstu (getline): ";
    std::getline(std::cin, line);
    std::cout << "Wczytana linia: " << line << std::endl;

    // Użycie funkcji read do wczytania określonej liczby znaków ze strumienia wejściowego
    char buffer[256];
    std::cout << "Podaj kilka znakow (read): ";
    std::cin.read(buffer, 5);  // Wczytuje 5 znaków
    buffer[5] = '\0'; // Dodajemy znak końca ciągu, aby móc wyświetlić jako ciąg znaków
    std::cout << "Wczytane znaki: " << buffer << std::endl;

    return 0;
} 