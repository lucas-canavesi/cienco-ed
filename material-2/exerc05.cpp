#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Pedido {
    string prato;
    int quantidade;
    double precoTotal;
};

int main() {
    vector<Pedido> pedidos;
    const double VALOR_SAIDA = -1;
    double preco;

    cout << "=== SISTEMA DE PEDIDOS DO RESTAURANTE ===\n";
    cout << "Digite " << VALOR_SAIDA << " no preço para encerrar\n\n";

    do {
        Pedido novoPedido;

        cout << "Nome do prato: ";
        getline(cin, novoPedido.prato);

        cout << "Quantidade: ";
        cin >> novoPedido.quantidade;

        cout << "Preço total: ";
        cin >> preco;

        if(preco == VALOR_SAIDA) break;

        novoPedido.precoTotal = preco;
        pedidos.push_back(novoPedido);
        cin.ignore();

    } while(true);


    cout << "\n=== PEDIDOS REGISTRADOS ===\n";
    cout << fixed << setprecision(2);
    cout << "--------------------------------------------\n";
    cout << left << setw(25) << "PRATO"
         << setw(10) << "QUANTIDADE"
         << "PREÇO TOTAL\n";
    cout << "--------------------------------------------\n";

    double totalGeral = 0;
    for(const auto& pedido : pedidos) {
        cout << left << setw(25) << pedido.prato
             << setw(10) << pedido.quantidade
             << "R$ " << pedido.precoTotal << "\n";
        totalGeral += pedido.precoTotal;
    }

    cout << "\nTOTAL GERAL: R$ " << totalGeral << endl;
    cout << "Quantidade de pedidos: " << pedidos.size() << endl;

    return 0;
}
