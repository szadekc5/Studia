#include <iostream>
#include <string>

int main() {
    // Tworzenie i inicjowanie obiektu string
    std::string text = "To jest przykladowy tekst";

    // Wyświetlanie zawartości stringa
    std::cout << "String: " << text << std::endl;

    // Pobieranie długości stringa
    std::cout << "Dlugosc tekstu: " << text.length() << " znakow." << std::endl;

    // Zamiana małych liter na duże
    std::string upperCaseText = text;
    for (char& c : upperCaseText) {
        c = std::toupper(c);
    }

    // Wyświetlanie stringa z dużymi literami
    std::cout << "Duze litery: " << upperCaseText << std::endl;
    std::cout << "Dlugosc tekstu: " << upperCaseText.length() << " znakow." << std::endl;

    // Sprawdzanie czy string rozpoczyna się od określonej frazy
    std::string prefix = "To jest";
    if (text.compare(0, prefix.size(), prefix) == 0) {
        std::cout << "Tekst zaczyna sie od: " << prefix << std::endl;
    }

    // Znajdowanie pozycji pierwszego wystąpienia frazy
    std::string searchPhrase = "przykladowy";
    size_t found = text.find(searchPhrase);
    if (found != std::string::npos) {
        std::cout << "Fraza '" << searchPhrase << "' znaleziona na pozycji: " << found << std::endl;
    }

    return 0;
}
