#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

void main() {
    setlocale(LC_ALL, "Portuguese");

    int i;
    char  escolher = 's';
    string nomes[5];

    do {
        for (i = 0; i < 5; i++) {
            cout << "Digite o " << i + 1 << "º nome: ";
            cin >> nomes[i];
        }



        for (i = 4; i >= 0; i--) {
            cout << nomes[i];
        }

        cout << "\nDeseja sair? (s para sair / n para continuar): ";
        cin >> escolher;
    } while (escolher == 'n');

}
