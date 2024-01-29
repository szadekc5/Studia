#include <iostream>

// Funkcja inline
inline int dodawanie(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 3;

    // Wywołanie funkcji inline
    int suma = dodawanie(x, y);

    std::cout << "Suma: " << suma << std::endl;

    return 0;
}


// Funkcja inline różni się od innych funkcji tym, że sugeruje kompilatorowi,
// aby wstawił ciało funkcji bezpośrednio w miejsce, gdzie jest wywoływana.
// To może zwiększyć wydajność, eliminując koszty związane z wywoływaniem funkcji,
// ale może też prowadzić do większego rozmiaru kodu wynikowego.
// Funkcje inline są szczególnie skuteczne dla krótkich, prostych funkcji.
