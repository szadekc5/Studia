#include <iostream> 

#include <fcntl.h> 

#include <io.h> 



int main() {

    _setmode(_fileno(stdout), _O_U16TEXT);



    // tu wpisz swój kod 
    //cout wyświetla błąd Debug Assertion Failed!, Expression buffer_size % 2 == 0
    std::cout << "Witaj Świecie ! \n";

    // wcout nie wyświetla polskich znaków
    std::wcout << "Witaj Świecie !";

    return 0;

}   