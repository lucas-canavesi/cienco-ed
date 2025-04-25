#include <iostream>
using namespace std;

typedef struct {
    string rua;
    string cidade;
    string CEP;
} Endereco;

typedef Endereco TipoEndereco;

int main() {
    TipoEndereco endereco;

    cout << "Cadastro de Endereço:\n";
    cout << "Rua: ";
    getline(cin, endereco.rua);
    cout << "Cidade: ";
    getline(cin, endereco.cidade);
    cout << "CEP: ";
    getline(cin, endereco.CEP);

    cout << "\nEndereço cadastrado:\n";
    cout << "Rua: " << endereco.rua << "\n";
    cout << "Cidade: " << endereco.cidade << "\n";
    cout << "CEP: " << endereco.CEP << "\n";

    return 0;
}
