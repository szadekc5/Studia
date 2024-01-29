#include <iostream>
#include <locale.h>

int main()
{

    setlocale(LC_CTYPE, "Polish");
    std::cout << "Wójt Żagań!\n";
}