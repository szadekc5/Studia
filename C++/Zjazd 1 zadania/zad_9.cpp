#include <iostream> 



int main() {

    int x = 2147483647;

    long y = 2147483647;

    long long z = 2147483647;


    //https://learn.microsoft.com/pl-pl/cpp/cpp/data-type-ranges?view=msvc-170


    std::cout << "Wartość int: " << x << std::endl;

    std::cout << "Wartość long: " << y << std::endl;

    std::cout << "Wartość long long: " << z << std::endl;

    x++;

    y++;

    z++;

    std::cout << "Wartość int: " << x << std::endl; // Wyświetla -2147483648 ponieważ maksymalny zakres int wynosi 2147483647

    std::cout << "Wartość long: " << y << std::endl; 

    std::cout << "Wartość long long: " << z << std::endl; // Wartość long long wyświetla niezmienioną liczbę ponieważ ma większy zakres niż int oraz long



    x = 0;

    y = 0;

    z = 0;

    std::cout << "Wartość unsigned int: " << x << std::endl;

    std::cout << "Wartość unsigned long: " << y << std::endl;

    std::cout << "Wartość unsigned long long: " << z << std::endl;

    x--;

    y--;

    z--;

    std::cout << "Wartość unsigned int: " << x << std::endl;

    std::cout << "Wartość unsigned long: " << y << std::endl;

    std::cout << "Wartość unsigned long long: " << z << std::endl;





    std::cout << std::endl << "Zmienne unsigned:" << std::endl;



    unsigned int ux = 2147483647;

    unsigned long uy = 2147483647;

    unsigned long long uz = 2147483647;



    std::cout << "Wartość unsigned int: " << ux << std::endl;

    std::cout << "Wartość unsigned long: " << uy << std::endl;

    std::cout << "Wartość unsigned long long: " << uz << std::endl;

    ux++;

    uy++;

    uz++;

    // Wartości unsigned mają zakres do 4294 967 295 dlatego wszystkie wartości zostały podniesione o 1

    std::cout << "Wartość unsigned int: " << ux << std::endl;

    std::cout << "Wartość unsigned long: " << uy << std::endl;

    std::cout << "Wartość unsigned long long: " << uz << std::endl;



    ux = 0;

    uy = 0;

    uz = 0;

    std::cout << "Wartość unsigned int: " << ux << std::endl;

    std::cout << "Wartość unsigned long: " << uy << std::endl;

    std::cout << "Wartość unsigned long long: " << uz << std::endl;

    ux--;

    uy--;

    uz--;

    std::cout << "Wartość unsigned int: " << ux << std::endl; //zakres od 0 do 4294 967 295 dlatego przy odejmowaniu od 0 wyświetla się górny zakres ponieważ nie ma ujemnych liczb

    std::cout << "Wartość unsigned long: " << uy << std::endl;//to samo co wyżej

    std::cout << "Wartość unsigned long long: " << uz << std::endl;// zakres od 0 do 18 446 744 073 709 551 615 dlatego wyświetlana jest większa liczba niż w przykładach powyżej



    return 0;

}