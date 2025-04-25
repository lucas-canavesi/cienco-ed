#include <iostream>
using namespace std;

enum Cores {
    VERMELHO,
    VERDE,
    AZUL,
    AMARELO,
    PRETO,
    BRANCO
};

typedef Cores TipoCor;

int main() {
    int escolha;
    TipoCor cor;

    cout << "Escolha uma cor:\n";
    cout << "0 - Vermelho\n";
    cout << "1 - Verde\n";
    cout << "2 - Azul\n";
    cout << "3 - Amarelo\n";
    cout << "4 - Preto\n";
    cout << "5 - Branco\n";
    cout << "Digite o número da cor: ";
    cin >> escolha;

    cor = static_cast<TipoCor>(escolha);

    cout << "\nCor escolhida: ";
    switch(cor) {
        case VERMELHO: cout << "Vermelho"; break;
        case VERDE: cout << "Verde"; break;
        case AZUL: cout << "Azul"; break;
        case AMARELO: cout << "Amarelo"; break;
        case PRETO: cout << "Preto"; break;
        case BRANCO: cout << "Branco"; break;
        default: cout << "Inválida";
    }

    return 0;
}
