#include <iostream>
#include <locale.h>
#include <ctime>

using namespace std;

int main(int argc, char* argv[]) {
    setlocale(LC_CTYPE, "Polish");
    time_t czas;

    struct tm* czas_info;

    time(&czas);

    czas_info = localtime(&czas);
    int numerDniaTygodnia;

    if (argc > 1) {
        numerDniaTygodnia = atoi(argv[1]); // Konwersja ciągu znaków na liczbę całkowitą
    }
    else {
        numerDniaTygodnia = czas_info->tm_wday;
    }

    switch (numerDniaTygodnia) {
    case 0:
        cout << "Niedziela";
        break;
    case 1:
        cout << "Poniedziałek";
        break;
    case 2:
        cout << "Wtorek";
        break;
    case 3:
        cout << "Środa";
        break;
    case 4:
        cout << "Czwartek";
        break;
    case 5:
        cout << "Piątek";
        break;
    case 6:
        cout << "Sobota";
        break;
    default:
        cout << "coś się zepsuło";
        break;
    }

    return 0;
}
