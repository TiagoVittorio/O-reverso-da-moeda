#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;
    char escolher;
    string nomes[5];

 
    for (i = 0; i < 5; i++) {
        cout << "Digite o " << i + 1 << "º nome: ";
        cin >> nomes[i];
    }


    cout << "\nNomes na ordem de trás para a frente:\n";
    for (i = 4; i >= 0; i--) {
        cout << nomes[i] << endl;
    }

    cout << "\nDeseja sair? (s para sair / n para continuar): ";
    cin >> escolher;

    switch (escolher) {
    case 's':
    case 'S':
        cout << "A fechar  o programa.\n";
        break;
    case 'n':
    case 'N':
        cout << "Continuando o programa...\n";
       
        break;
    default:
        cout << "Opção errada, por favor escolhe 's' ou 'n'!\n";
        break;
    }

    return 0;
}
