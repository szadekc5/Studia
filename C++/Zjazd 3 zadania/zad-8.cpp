#include <iostream>

// Funkcja obliczająca wartość n-tego elementu w ciągu Fibonacciego za pomocą pętli
int fibonaccipetla(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0, b = 1, temp;
    for (int i = 2; i <= n; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    int n;

    std::cout << "Podaj wartość n: ";
    std::cin >> n;

    std::cout << "Wartość dla " << n << "-tego elementu ciągu Fibonacciego (petla): " << fibonaccipetla(n) << std::endl;

    return 0;
}








#include <iostream>

// Funkcja obliczająca wartość n-tego elementu w ciągu Fibonacciego za pomocą rekurencji
int fibonaccirekurencja(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonaccirekurencja(n - 1) + fibonaccirekurencja(n - 2);
}

int main() {
    int n;

    std::cout << "Podaj wartość n: ";
    std::cin >> n;

    std::cout << "Wartość dla " << n << "-tego elementu ciągu Fibonacciego (rekurencja): " << fibonaccirekurencja(n) << std::endl;

    return 0;
}


