#include <iostream>

using namespace std;


void wyswietlHelloWorld(int iloscRazy = 1)
{
    for (int i = 0; i < iloscRazy; i++)
    {
        cout << "Hello, World!" << endl;
    }
}

int main()
{

    wyswietlHelloWorld();

    cout << endl;

    wyswietlHelloWorld(3);

    return 0;
}
