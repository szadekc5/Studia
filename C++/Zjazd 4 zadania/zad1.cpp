#include <iostream>
#include <string>
using namespace std;

int main() {
setlocale(LC_ALL, "Polish");
    
    string line("Mam na imię Maciek");
    string line1("Mam na imię Maciek");
    string line2("Bardzo nie lubię c++");
    
        line.replace(12, 7, "Michał"); 
        //funckja .replace zamienia część stringa line słowem Michał. gdzie: 13-oznacza miejsce od, którego następuje zamiana a 7 oznacza ilość zamienionych znaków

        line1.insert(18, " i mam 23 lat");
        //funkcja .insert dodaje do line1 "i mam 23 lat" od pozycji 19

        line2.erase(7, 4);
        //funkcja .erase usuwa znaki z line2. gdzie: 7 oznacza miejsce od, którego zaczyna się usuwanie znaków a 4 oznacza ilość znaków do usunięcia


    cout << line << endl;
    cout << line1 << endl;
    cout << line2 << endl;

    return 0;
}