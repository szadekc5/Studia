#include <iostream>

// 1. Przeciążanie funkcji dla różnych typów danych
int dodaj(int a, int b) {
    return a + b;
}

double dodaj(double a, double b) {
    return a + b;
}

int main() {
    std::cout << "Suma int: " << dodaj(5, 3) << std::endl;
    std::cout << "Suma double: " << dodaj(2.5, 3.7) << std::endl;

    return 0;
}







#include <iostream>

// 2. Przeciążanie funkcji dla różnej liczby parametrów
int suma(int a, int b) {
    return a + b;
}

int suma(int a, int b, int c) {
    return a + b + c;
}

int main() {
    std::cout << "Suma dwóch liczb: " << suma(5, 3) << std::endl;
    std::cout << "Suma trzech liczb: " << suma(2, 4, 6) << std::endl;

    return 0;
}

