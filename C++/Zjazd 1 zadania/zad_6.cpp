#include <iostream>
#include <locale.h>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_CTYPE, "Polish");
    float promien, pole;

    std::cout << "Podaj promień okręgu: ";

    std::cin >> promien;

    pole = 3.14 * promien * promien;

    std::cout << "Pole okręgu o promieniu " << promien << " wynosi w przybliżeniu " << pole;



    return 0;



}
