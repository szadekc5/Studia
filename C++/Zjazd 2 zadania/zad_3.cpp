#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pl_PL.utf8");

	

		int petlaWhile = 1;
		int petlaDoWhite = 1;

		while (petlaWhile < 10)
		{
			cout << "Przykład wypisania z pętli while nr " << petlaWhile << endl;

			petlaWhile++;
		}

		do
		{
			cout << "Przykład wypisania z pętli do-while nr " << petlaDoWhite << endl;

			petlaDoWhite++;

		} while (petlaDoWhite < 10);

    return 0;
}
